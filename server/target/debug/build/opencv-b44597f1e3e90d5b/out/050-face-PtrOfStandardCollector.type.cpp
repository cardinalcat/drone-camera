extern "C" void cv_PtrOfStandardCollector_delete(cv::Ptr<cv::face::StandardCollector>* instance) {
	delete instance;
}

extern "C" cv::face::StandardCollector* cv_PtrOfStandardCollector_get_inner_ptr(cv::Ptr<cv::face::StandardCollector>* instance) {
	return instance->get();
}

