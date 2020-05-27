extern "C" void cv_PtrOfBaseConvolutionLayer_delete(cv::Ptr<cv::dnn::BaseConvolutionLayer>* instance) {
	delete instance;
}

extern "C" cv::dnn::BaseConvolutionLayer* cv_PtrOfBaseConvolutionLayer_get_inner_ptr(cv::Ptr<cv::dnn::BaseConvolutionLayer>* instance) {
	return instance->get();
}

