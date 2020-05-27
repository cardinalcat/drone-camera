extern "C" void cv_PtrOfDetail_FeaturesMatcher_delete(cv::Ptr<cv::detail::FeaturesMatcher>* instance) {
	delete instance;
}

extern "C" cv::detail::FeaturesMatcher* cv_PtrOfDetail_FeaturesMatcher_get_inner_ptr(cv::Ptr<cv::detail::FeaturesMatcher>* instance) {
	return instance->get();
}

