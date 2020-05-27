extern "C" void cv_PtrOfDescriptorMatcher_delete(cv::Ptr<cv::DescriptorMatcher>* instance) {
	delete instance;
}

extern "C" cv::DescriptorMatcher* cv_PtrOfDescriptorMatcher_get_inner_ptr(cv::Ptr<cv::DescriptorMatcher>* instance) {
	return instance->get();
}

