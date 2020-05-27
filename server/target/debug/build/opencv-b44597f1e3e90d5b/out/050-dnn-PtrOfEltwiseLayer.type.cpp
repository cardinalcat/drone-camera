extern "C" void cv_PtrOfEltwiseLayer_delete(cv::Ptr<cv::dnn::EltwiseLayer>* instance) {
	delete instance;
}

extern "C" cv::dnn::EltwiseLayer* cv_PtrOfEltwiseLayer_get_inner_ptr(cv::Ptr<cv::dnn::EltwiseLayer>* instance) {
	return instance->get();
}

