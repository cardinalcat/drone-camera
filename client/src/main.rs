use image::{ImageBuffer, Rgb};
use opencv::{core, highgui, imgcodecs::*, prelude::*, videoio};
use std::convert::TryInto;
use std::ffi::c_void;
use std::io::{Read, Write};
use std::net::UdpSocket;
use std::thread;
fn main() {
    run().unwrap();
}
fn run() -> opencv::Result<()>{
    let mut cam = videoio::VideoCapture::new(0, videoio::CAP_ANY)?; // 0 is the default camera
    let opened = videoio::VideoCapture::is_opened(&cam)?;
    if !opened {
        panic!("Unable to open default camera!");
    }

    let mut params: core::Vector<i32> = core::Vector::new();
    params.push(IMWRITE_JPEG_QUALITY);
    params.push(30);
    let mut socket = UdpSocket::bind("0.0.0.0:6432").unwrap();
    socket.connect("192.168.1.212:6464").unwrap();
    loop {
        let mut frame = core::Mat::default()?;
        cam.read(&mut frame)?;
        let mut outbuf: core::Vector<u8> = core::Vector::with_capacity(640 * 480 * 3);
        if frame.size()?.width > 0 {
            imencode(".jpg", &frame, &mut outbuf, &params).unwrap();
            //println!("frame size: {}, {}", frame.size()?.width, frame.size()?.height);
            //println!("outbuf len: {}", outbuf.len());
            socket.send(&outbuf.to_vec()).unwrap();
        }
    }
    Ok(())
}
