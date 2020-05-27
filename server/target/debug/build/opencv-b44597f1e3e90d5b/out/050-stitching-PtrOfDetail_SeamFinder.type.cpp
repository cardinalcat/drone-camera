extern "C" void cv_PtrOfDetail_SeamFinder_delete(cv::Ptr<cv::detail::SeamFinder>* instance) {
	delete instance;
}

extern "C" cv::detail::SeamFinder* cv_PtrOfDetail_SeamFinder_get_inner_ptr(cv::Ptr<cv::detail::SeamFinder>* instance) {
	return instance->get();
}

