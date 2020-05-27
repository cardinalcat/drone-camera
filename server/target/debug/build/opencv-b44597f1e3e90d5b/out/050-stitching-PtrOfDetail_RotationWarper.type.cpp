extern "C" void cv_PtrOfDetail_RotationWarper_delete(cv::Ptr<cv::detail::RotationWarper>* instance) {
	delete instance;
}

extern "C" cv::detail::RotationWarper* cv_PtrOfDetail_RotationWarper_get_inner_ptr(cv::Ptr<cv::detail::RotationWarper>* instance) {
	return instance->get();
}

