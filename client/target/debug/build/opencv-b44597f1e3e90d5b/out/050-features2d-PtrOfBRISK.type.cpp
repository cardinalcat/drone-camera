extern "C" void cv_PtrOfBRISK_delete(cv::Ptr<cv::BRISK>* instance) {
	delete instance;
}

extern "C" cv::BRISK* cv_PtrOfBRISK_get_inner_ptr(cv::Ptr<cv::BRISK>* instance) {
	return instance->get();
}

