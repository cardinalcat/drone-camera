extern "C" void cv_PtrOfEM_delete(cv::Ptr<cv::ml::EM>* instance) {
	delete instance;
}

extern "C" cv::ml::EM* cv_PtrOfEM_get_inner_ptr(cv::Ptr<cv::ml::EM>* instance) {
	return instance->get();
}

