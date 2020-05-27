extern "C" void cv_PtrOfBFMatcher_delete(cv::Ptr<cv::BFMatcher>* instance) {
	delete instance;
}

extern "C" cv::BFMatcher* cv_PtrOfBFMatcher_get_inner_ptr(cv::Ptr<cv::BFMatcher>* instance) {
	return instance->get();
}

