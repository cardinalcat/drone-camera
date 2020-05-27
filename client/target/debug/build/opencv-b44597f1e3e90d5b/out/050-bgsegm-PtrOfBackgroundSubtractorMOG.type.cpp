extern "C" void cv_PtrOfBackgroundSubtractorMOG_delete(cv::Ptr<cv::bgsegm::BackgroundSubtractorMOG>* instance) {
	delete instance;
}

extern "C" cv::bgsegm::BackgroundSubtractorMOG* cv_PtrOfBackgroundSubtractorMOG_get_inner_ptr(cv::Ptr<cv::bgsegm::BackgroundSubtractorMOG>* instance) {
	return instance->get();
}

