extern "C" void cv_PtrOfBackgroundSubtractorGMG_delete(cv::Ptr<cv::bgsegm::BackgroundSubtractorGMG>* instance) {
	delete instance;
}

extern "C" cv::bgsegm::BackgroundSubtractorGMG* cv_PtrOfBackgroundSubtractorGMG_get_inner_ptr(cv::Ptr<cv::bgsegm::BackgroundSubtractorGMG>* instance) {
	return instance->get();
}

