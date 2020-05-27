extern "C" void cv_PtrOfDetail_ExposureCompensator_delete(cv::Ptr<cv::detail::ExposureCompensator>* instance) {
	delete instance;
}

extern "C" cv::detail::ExposureCompensator* cv_PtrOfDetail_ExposureCompensator_get_inner_ptr(cv::Ptr<cv::detail::ExposureCompensator>* instance) {
	return instance->get();
}

