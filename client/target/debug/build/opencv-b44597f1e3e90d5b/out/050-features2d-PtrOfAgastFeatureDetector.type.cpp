extern "C" void cv_PtrOfAgastFeatureDetector_delete(cv::Ptr<cv::AgastFeatureDetector>* instance) {
	delete instance;
}

extern "C" cv::AgastFeatureDetector* cv_PtrOfAgastFeatureDetector_get_inner_ptr(cv::Ptr<cv::AgastFeatureDetector>* instance) {
	return instance->get();
}

