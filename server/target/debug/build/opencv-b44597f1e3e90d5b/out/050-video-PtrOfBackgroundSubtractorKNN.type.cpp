extern "C" void cv_PtrOfBackgroundSubtractorKNN_delete(cv::Ptr<cv::BackgroundSubtractorKNN>* instance) {
	delete instance;
}

extern "C" cv::BackgroundSubtractorKNN* cv_PtrOfBackgroundSubtractorKNN_get_inner_ptr(cv::Ptr<cv::BackgroundSubtractorKNN>* instance) {
	return instance->get();
}

