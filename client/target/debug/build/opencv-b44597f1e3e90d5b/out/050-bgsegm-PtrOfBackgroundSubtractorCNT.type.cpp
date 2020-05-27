extern "C" void cv_PtrOfBackgroundSubtractorCNT_delete(cv::Ptr<cv::bgsegm::BackgroundSubtractorCNT>* instance) {
	delete instance;
}

extern "C" cv::bgsegm::BackgroundSubtractorCNT* cv_PtrOfBackgroundSubtractorCNT_get_inner_ptr(cv::Ptr<cv::bgsegm::BackgroundSubtractorCNT>* instance) {
	return instance->get();
}

