extern "C" void cv_PtrOfKNearest_delete(cv::Ptr<cv::ml::KNearest>* instance) {
	delete instance;
}

extern "C" cv::ml::KNearest* cv_PtrOfKNearest_get_inner_ptr(cv::Ptr<cv::ml::KNearest>* instance) {
	return instance->get();
}

