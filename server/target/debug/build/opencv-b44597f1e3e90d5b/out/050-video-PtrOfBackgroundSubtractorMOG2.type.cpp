extern "C" void cv_PtrOfBackgroundSubtractorMOG2_delete(cv::Ptr<cv::BackgroundSubtractorMOG2>* instance) {
	delete instance;
}

extern "C" cv::BackgroundSubtractorMOG2* cv_PtrOfBackgroundSubtractorMOG2_get_inner_ptr(cv::Ptr<cv::BackgroundSubtractorMOG2>* instance) {
	return instance->get();
}

