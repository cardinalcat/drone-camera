extern "C" void cv_PtrOfBIF_delete(cv::Ptr<cv::face::BIF>* instance) {
	delete instance;
}

extern "C" cv::face::BIF* cv_PtrOfBIF_get_inner_ptr(cv::Ptr<cv::face::BIF>* instance) {
	return instance->get();
}

