extern "C" void cv_PtrOfSearchParams_delete(cv::Ptr<cv::flann::SearchParams>* instance) {
	delete instance;
}

extern "C" cv::flann::SearchParams* cv_PtrOfSearchParams_get_inner_ptr(cv::Ptr<cv::flann::SearchParams>* instance) {
	return instance->get();
}

