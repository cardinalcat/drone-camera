extern "C" void cv_PtrOfMSER_delete(cv::Ptr<cv::MSER>* instance) {
	delete instance;
}

extern "C" cv::MSER* cv_PtrOfMSER_get_inner_ptr(cv::Ptr<cv::MSER>* instance) {
	return instance->get();
}

