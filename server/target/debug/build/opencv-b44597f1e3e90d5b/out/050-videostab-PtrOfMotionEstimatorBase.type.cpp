extern "C" void cv_PtrOfMotionEstimatorBase_delete(cv::Ptr<cv::videostab::MotionEstimatorBase>* instance) {
	delete instance;
}

extern "C" cv::videostab::MotionEstimatorBase* cv_PtrOfMotionEstimatorBase_get_inner_ptr(cv::Ptr<cv::videostab::MotionEstimatorBase>* instance) {
	return instance->get();
}

