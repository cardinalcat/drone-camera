extern "C" void cv_PtrOfERFilter_delete(cv::Ptr<cv::text::ERFilter>* instance) {
	delete instance;
}

extern "C" cv::text::ERFilter* cv_PtrOfERFilter_get_inner_ptr(cv::Ptr<cv::text::ERFilter>* instance) {
	return instance->get();
}

