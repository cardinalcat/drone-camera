extern "C" void cv_PtrOfFormatter_delete(cv::Ptr<cv::Formatter>* instance) {
	delete instance;
}

extern "C" cv::Formatter* cv_PtrOfFormatter_get_inner_ptr(cv::Ptr<cv::Formatter>* instance) {
	return instance->get();
}

