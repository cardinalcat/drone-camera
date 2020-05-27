extern "C" void cv_PtrOfAKAZE_delete(cv::Ptr<cv::AKAZE>* instance) {
	delete instance;
}

extern "C" cv::AKAZE* cv_PtrOfAKAZE_get_inner_ptr(cv::Ptr<cv::AKAZE>* instance) {
	return instance->get();
}

