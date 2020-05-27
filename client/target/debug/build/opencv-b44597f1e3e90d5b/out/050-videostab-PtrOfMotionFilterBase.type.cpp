extern "C" void cv_PtrOfMotionFilterBase_delete(cv::Ptr<cv::videostab::MotionFilterBase>* instance) {
	delete instance;
}

extern "C" cv::videostab::MotionFilterBase* cv_PtrOfMotionFilterBase_get_inner_ptr(cv::Ptr<cv::videostab::MotionFilterBase>* instance) {
	return instance->get();
}

