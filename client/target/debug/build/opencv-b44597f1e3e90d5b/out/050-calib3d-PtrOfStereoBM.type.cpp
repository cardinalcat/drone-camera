extern "C" void cv_PtrOfStereoBM_delete(cv::Ptr<cv::StereoBM>* instance) {
	delete instance;
}

extern "C" cv::StereoBM* cv_PtrOfStereoBM_get_inner_ptr(cv::Ptr<cv::StereoBM>* instance) {
	return instance->get();
}

