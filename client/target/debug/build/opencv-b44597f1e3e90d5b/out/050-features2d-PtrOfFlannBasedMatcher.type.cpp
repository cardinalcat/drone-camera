extern "C" void cv_PtrOfFlannBasedMatcher_delete(cv::Ptr<cv::FlannBasedMatcher>* instance) {
	delete instance;
}

extern "C" cv::FlannBasedMatcher* cv_PtrOfFlannBasedMatcher_get_inner_ptr(cv::Ptr<cv::FlannBasedMatcher>* instance) {
	return instance->get();
}

