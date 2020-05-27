extern "C" void cv_PtrOfDPMDetector_delete(cv::Ptr<cv::dpm::DPMDetector>* instance) {
	delete instance;
}

extern "C" cv::dpm::DPMDetector* cv_PtrOfDPMDetector_get_inner_ptr(cv::Ptr<cv::dpm::DPMDetector>* instance) {
	return instance->get();
}

