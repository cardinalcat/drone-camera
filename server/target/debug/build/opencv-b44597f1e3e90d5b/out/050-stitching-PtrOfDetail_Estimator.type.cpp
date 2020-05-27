extern "C" void cv_PtrOfDetail_Estimator_delete(cv::Ptr<cv::detail::Estimator>* instance) {
	delete instance;
}

extern "C" cv::detail::Estimator* cv_PtrOfDetail_Estimator_get_inner_ptr(cv::Ptr<cv::detail::Estimator>* instance) {
	return instance->get();
}

