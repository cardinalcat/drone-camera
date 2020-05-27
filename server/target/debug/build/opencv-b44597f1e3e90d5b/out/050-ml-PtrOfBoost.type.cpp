extern "C" void cv_PtrOfBoost_delete(cv::Ptr<cv::ml::Boost>* instance) {
	delete instance;
}

extern "C" cv::ml::Boost* cv_PtrOfBoost_get_inner_ptr(cv::Ptr<cv::ml::Boost>* instance) {
	return instance->get();
}

