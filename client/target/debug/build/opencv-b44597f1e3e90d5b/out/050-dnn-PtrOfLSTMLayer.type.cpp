extern "C" void cv_PtrOfLSTMLayer_delete(cv::Ptr<cv::dnn::LSTMLayer>* instance) {
	delete instance;
}

extern "C" cv::dnn::LSTMLayer* cv_PtrOfLSTMLayer_get_inner_ptr(cv::Ptr<cv::dnn::LSTMLayer>* instance) {
	return instance->get();
}

