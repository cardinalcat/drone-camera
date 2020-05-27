extern "C" void cv_PtrOfLineSegmentDetector_delete(cv::Ptr<cv::LineSegmentDetector>* instance) {
	delete instance;
}

extern "C" cv::LineSegmentDetector* cv_PtrOfLineSegmentDetector_get_inner_ptr(cv::Ptr<cv::LineSegmentDetector>* instance) {
	return instance->get();
}

