extern "C" void cv_PtrOfDetectionBasedTracker_IDetector_delete(cv::Ptr<cv::DetectionBasedTracker::IDetector>* instance) {
	delete instance;
}

extern "C" cv::DetectionBasedTracker::IDetector* cv_PtrOfDetectionBasedTracker_IDetector_get_inner_ptr(cv::Ptr<cv::DetectionBasedTracker::IDetector>* instance) {
	return instance->get();
}

