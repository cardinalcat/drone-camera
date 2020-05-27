extern "C" void cv_PtrOfRNNLayer_delete(cv::Ptr<cv::dnn::RNNLayer>* instance) {
	delete instance;
}

extern "C" cv::dnn::RNNLayer* cv_PtrOfRNNLayer_get_inner_ptr(cv::Ptr<cv::dnn::RNNLayer>* instance) {
	return instance->get();
}

