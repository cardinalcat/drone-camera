extern "C" void cv_PtrOfPermuteLayer_delete(cv::Ptr<cv::dnn::PermuteLayer>* instance) {
	delete instance;
}

extern "C" cv::dnn::PermuteLayer* cv_PtrOfPermuteLayer_get_inner_ptr(cv::Ptr<cv::dnn::PermuteLayer>* instance) {
	return instance->get();
}

