extern "C" void cv_PtrOfGFTTDetector_delete(cv::Ptr<cv::GFTTDetector>* instance) {
	delete instance;
}

extern "C" cv::GFTTDetector* cv_PtrOfGFTTDetector_get_inner_ptr(cv::Ptr<cv::GFTTDetector>* instance) {
	return instance->get();
}

