extern "C" void cv_PtrOfBoard_delete(cv::Ptr<cv::aruco::Board>* instance) {
	delete instance;
}

extern "C" cv::aruco::Board* cv_PtrOfBoard_get_inner_ptr(cv::Ptr<cv::aruco::Board>* instance) {
	return instance->get();
}

