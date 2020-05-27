use image::{ImageBuffer, Rgb};
use opencv::{core, highgui, imgcodecs::*, prelude::*, videoio};
use std::convert::TryInto;
use std::ffi::c_void;
use std::io::{Read, Write};
use std::net::UdpSocket;
use std::net::{TcpListener, TcpStream};
use std::thread;
fn main() {
    run().unwrap();
}
fn run() -> opencv::Result<()> {
    let listener = TcpListener::bind("0.0.0.0:6464").unwrap();
    for stream in listener.incoming(){    
        println!("new stream");
        thread::spawn(move ||{
            let mut stream = stream.unwrap();
            let window = "video capture";
            println!("before loop");
            highgui::named_window(window, 1).unwrap();
            let mut read_buf: [u8; 65535] = [0; 65535];
            let mut vec: core::Vector<u8> = core::Vector::with_capacity(65535);
            //let mut socket = UdpSocket::bind("0.0.0.0:6464").unwrap();
            loop {
                //let mut mem: [u8;65535] = [0;65535];
                let recv_len = stream.read(&mut read_buf).unwrap();
                for i in 0..read_buf.len() {
                    if 1 == recv_len {
                        break;
                    }
                    vec.push(read_buf[i]);
                }
                let mut newframe = imdecode(&vec, -1).unwrap();
                let width = newframe.size().unwrap().width as u32;
                let height = newframe.size().unwrap().height as u32;
                let lencap = (width * height * 3) as usize;
                highgui::imshow(window, &mut newframe).unwrap();
                let mut mutptr = newframe.as_raw_mut_Mat() as *mut u8;
                let mut imgvec;
                unsafe {
                    std::mem::forget(newframe);
                    imgvec = Vec::from_raw_parts(mutptr, lencap, lencap);
                }
                let image: ImageBuffer<Rgb<u8>, Vec<u8>> =
                    ImageBuffer::from_raw(width, height, imgvec).unwrap();
                let key = highgui::wait_key(10).unwrap();
                if key > 0 && key != 255 {
                    break;
                }
                vec.clear();
            }
        });
    }
    Ok(())
}
