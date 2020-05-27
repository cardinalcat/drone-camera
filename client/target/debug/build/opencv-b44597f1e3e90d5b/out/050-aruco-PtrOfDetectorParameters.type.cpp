extern "C" void cv_PtrOfDetectorParameters_delete(cv::Ptr<cv::aruco::DetectorParameters>* instance) {
	delete instance;
}

extern "C" cv::aruco::DetectorParameters* cv_PtrOfDetectorParameters_get_inner_ptr(cv::Ptr<cv::aruco::DetectorParameters>* instance) {
	return instance->get();
}

