extern "C" void cv_PtrOfERFilter_Callback_delete(cv::Ptr<cv::text::ERFilter::Callback>* instance) {
	delete instance;
}

extern "C" cv::text::ERFilter::Callback* cv_PtrOfERFilter_Callback_get_inner_ptr(cv::Ptr<cv::text::ERFilter::Callback>* instance) {
	return instance->get();
}

