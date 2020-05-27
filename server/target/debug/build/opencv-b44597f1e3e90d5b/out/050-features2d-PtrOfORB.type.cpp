extern "C" void cv_PtrOfORB_delete(cv::Ptr<cv::ORB>* instance) {
	delete instance;
}

extern "C" cv::ORB* cv_PtrOfORB_get_inner_ptr(cv::Ptr<cv::ORB>* instance) {
	return instance->get();
}

