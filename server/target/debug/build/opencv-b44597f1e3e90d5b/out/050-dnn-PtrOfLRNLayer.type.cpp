extern "C" void cv_PtrOfLRNLayer_delete(cv::Ptr<cv::dnn::LRNLayer>* instance) {
	delete instance;
}

extern "C" cv::dnn::LRNLayer* cv_PtrOfLRNLayer_get_inner_ptr(cv::Ptr<cv::dnn::LRNLayer>* instance) {
	return instance->get();
}

