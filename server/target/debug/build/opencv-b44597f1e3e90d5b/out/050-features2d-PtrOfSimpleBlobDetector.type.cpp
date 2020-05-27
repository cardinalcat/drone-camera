extern "C" void cv_PtrOfSimpleBlobDetector_delete(cv::Ptr<cv::SimpleBlobDetector>* instance) {
	delete instance;
}

extern "C" cv::SimpleBlobDetector* cv_PtrOfSimpleBlobDetector_get_inner_ptr(cv::Ptr<cv::SimpleBlobDetector>* instance) {
	return instance->get();
}

