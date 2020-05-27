extern "C" void cv_PtrOfTonemap_delete(cv::Ptr<cv::Tonemap>* instance) {
	delete instance;
}

extern "C" cv::Tonemap* cv_PtrOfTonemap_get_inner_ptr(cv::Ptr<cv::Tonemap>* instance) {
	return instance->get();
}

