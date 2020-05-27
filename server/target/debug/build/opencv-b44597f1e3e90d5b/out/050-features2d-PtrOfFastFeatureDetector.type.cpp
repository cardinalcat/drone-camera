extern "C" void cv_PtrOfFastFeatureDetector_delete(cv::Ptr<cv::FastFeatureDetector>* instance) {
	delete instance;
}

extern "C" cv::FastFeatureDetector* cv_PtrOfFastFeatureDetector_get_inner_ptr(cv::Ptr<cv::FastFeatureDetector>* instance) {
	return instance->get();
}

