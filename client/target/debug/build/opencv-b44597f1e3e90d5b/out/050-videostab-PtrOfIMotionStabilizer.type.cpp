extern "C" void cv_PtrOfIMotionStabilizer_delete(cv::Ptr<cv::videostab::IMotionStabilizer>* instance) {
	delete instance;
}

extern "C" cv::videostab::IMotionStabilizer* cv_PtrOfIMotionStabilizer_get_inner_ptr(cv::Ptr<cv::videostab::IMotionStabilizer>* instance) {
	return instance->get();
}

