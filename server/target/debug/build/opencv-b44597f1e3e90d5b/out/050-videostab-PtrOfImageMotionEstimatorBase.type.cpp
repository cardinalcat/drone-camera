extern "C" void cv_PtrOfImageMotionEstimatorBase_delete(cv::Ptr<cv::videostab::ImageMotionEstimatorBase>* instance) {
	delete instance;
}

extern "C" cv::videostab::ImageMotionEstimatorBase* cv_PtrOfImageMotionEstimatorBase_get_inner_ptr(cv::Ptr<cv::videostab::ImageMotionEstimatorBase>* instance) {
	return instance->get();
}

