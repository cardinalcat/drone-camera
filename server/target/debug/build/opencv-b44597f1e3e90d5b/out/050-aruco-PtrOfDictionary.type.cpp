extern "C" void cv_PtrOfDictionary_delete(cv::Ptr<cv::aruco::Dictionary>* instance) {
	delete instance;
}

extern "C" cv::aruco::Dictionary* cv_PtrOfDictionary_get_inner_ptr(cv::Ptr<cv::aruco::Dictionary>* instance) {
	return instance->get();
}

