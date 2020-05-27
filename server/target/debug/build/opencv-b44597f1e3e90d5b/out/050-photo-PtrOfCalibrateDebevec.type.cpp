extern "C" void cv_PtrOfCalibrateDebevec_delete(cv::Ptr<cv::CalibrateDebevec>* instance) {
	delete instance;
}

extern "C" cv::CalibrateDebevec* cv_PtrOfCalibrateDebevec_get_inner_ptr(cv::Ptr<cv::CalibrateDebevec>* instance) {
	return instance->get();
}

