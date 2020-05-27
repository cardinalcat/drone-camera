extern "C" void cv_PtrOfSplitLayer_delete(cv::Ptr<cv::dnn::SplitLayer>* instance) {
	delete instance;
}

extern "C" cv::dnn::SplitLayer* cv_PtrOfSplitLayer_get_inner_ptr(cv::Ptr<cv::dnn::SplitLayer>* instance) {
	return instance->get();
}

