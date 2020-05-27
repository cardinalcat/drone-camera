extern "C" void cv_PtrOfKAZE_delete(cv::Ptr<cv::KAZE>* instance) {
	delete instance;
}

extern "C" cv::KAZE* cv_PtrOfKAZE_get_inner_ptr(cv::Ptr<cv::KAZE>* instance) {
	return instance->get();
}

