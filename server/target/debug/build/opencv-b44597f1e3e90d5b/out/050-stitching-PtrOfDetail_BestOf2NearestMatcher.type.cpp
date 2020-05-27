extern "C" void cv_PtrOfDetail_BestOf2NearestMatcher_delete(cv::Ptr<cv::detail::BestOf2NearestMatcher>* instance) {
	delete instance;
}

extern "C" cv::detail::BestOf2NearestMatcher* cv_PtrOfDetail_BestOf2NearestMatcher_get_inner_ptr(cv::Ptr<cv::detail::BestOf2NearestMatcher>* instance) {
	return instance->get();
}

