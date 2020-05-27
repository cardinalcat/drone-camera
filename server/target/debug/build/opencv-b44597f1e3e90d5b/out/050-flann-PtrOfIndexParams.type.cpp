extern "C" void cv_PtrOfIndexParams_delete(cv::Ptr<cv::flann::IndexParams>* instance) {
	delete instance;
}

extern "C" cv::flann::IndexParams* cv_PtrOfIndexParams_get_inner_ptr(cv::Ptr<cv::flann::IndexParams>* instance) {
	return instance->get();
}

