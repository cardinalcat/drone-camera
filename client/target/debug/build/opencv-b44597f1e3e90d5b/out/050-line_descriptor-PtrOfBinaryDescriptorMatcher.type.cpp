extern "C" void cv_PtrOfBinaryDescriptorMatcher_delete(cv::Ptr<cv::line_descriptor::BinaryDescriptorMatcher>* instance) {
	delete instance;
}

extern "C" cv::line_descriptor::BinaryDescriptorMatcher* cv_PtrOfBinaryDescriptorMatcher_get_inner_ptr(cv::Ptr<cv::line_descriptor::BinaryDescriptorMatcher>* instance) {
	return instance->get();
}

