extern "C" void cv_PtrOfCharucoBoard_delete(cv::Ptr<cv::aruco::CharucoBoard>* instance) {
	delete instance;
}

extern "C" cv::aruco::CharucoBoard* cv_PtrOfCharucoBoard_get_inner_ptr(cv::Ptr<cv::aruco::CharucoBoard>* instance) {
	return instance->get();
}

