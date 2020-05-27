extern "C" void cv_PtrOfMergeMertens_delete(cv::Ptr<cv::MergeMertens>* instance) {
	delete instance;
}

extern "C" cv::MergeMertens* cv_PtrOfMergeMertens_get_inner_ptr(cv::Ptr<cv::MergeMertens>* instance) {
	return instance->get();
}

