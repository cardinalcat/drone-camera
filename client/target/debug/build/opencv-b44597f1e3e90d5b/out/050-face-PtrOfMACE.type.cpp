extern "C" void cv_PtrOfMACE_delete(cv::Ptr<cv::face::MACE>* instance) {
	delete instance;
}

extern "C" cv::face::MACE* cv_PtrOfMACE_get_inner_ptr(cv::Ptr<cv::face::MACE>* instance) {
	return instance->get();
}

