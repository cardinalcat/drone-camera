extern "C" void cv_PtrOfCLAHE_delete(cv::Ptr<cv::CLAHE>* instance) {
	delete instance;
}

extern "C" cv::CLAHE* cv_PtrOfCLAHE_get_inner_ptr(cv::Ptr<cv::CLAHE>* instance) {
	return instance->get();
}

