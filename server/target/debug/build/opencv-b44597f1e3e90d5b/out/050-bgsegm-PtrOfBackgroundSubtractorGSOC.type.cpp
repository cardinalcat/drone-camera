extern "C" void cv_PtrOfBackgroundSubtractorGSOC_delete(cv::Ptr<cv::bgsegm::BackgroundSubtractorGSOC>* instance) {
	delete instance;
}

extern "C" cv::bgsegm::BackgroundSubtractorGSOC* cv_PtrOfBackgroundSubtractorGSOC_get_inner_ptr(cv::Ptr<cv::bgsegm::BackgroundSubtractorGSOC>* instance) {
	return instance->get();
}

