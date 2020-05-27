extern "C" void cv_PtrOfBackgroundSubtractorLSBP_delete(cv::Ptr<cv::bgsegm::BackgroundSubtractorLSBP>* instance) {
	delete instance;
}

extern "C" cv::bgsegm::BackgroundSubtractorLSBP* cv_PtrOfBackgroundSubtractorLSBP_get_inner_ptr(cv::Ptr<cv::bgsegm::BackgroundSubtractorLSBP>* instance) {
	return instance->get();
}

