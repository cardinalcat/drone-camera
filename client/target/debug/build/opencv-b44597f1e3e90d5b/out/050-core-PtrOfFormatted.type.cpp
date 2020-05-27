extern "C" void cv_PtrOfFormatted_delete(cv::Ptr<cv::Formatted>* instance) {
	delete instance;
}

extern "C" cv::Formatted* cv_PtrOfFormatted_get_inner_ptr(cv::Ptr<cv::Formatted>* instance) {
	return instance->get();
}

