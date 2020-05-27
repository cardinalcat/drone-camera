extern "C" void cv_PtrOfFileStorage_delete(cv::Ptr<cv::FileStorage>* instance) {
	delete instance;
}

extern "C" cv::FileStorage* cv_PtrOfFileStorage_get_inner_ptr(cv::Ptr<cv::FileStorage>* instance) {
	return instance->get();
}

