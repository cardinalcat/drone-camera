extern "C" void cv_PtrOfDetail_BundleAdjusterBase_delete(cv::Ptr<cv::detail::BundleAdjusterBase>* instance) {
	delete instance;
}

extern "C" cv::detail::BundleAdjusterBase* cv_PtrOfDetail_BundleAdjusterBase_get_inner_ptr(cv::Ptr<cv::detail::BundleAdjusterBase>* instance) {
	return instance->get();
}

