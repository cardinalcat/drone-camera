extern "C" void cv_PtrOfReLULayer_delete(cv::Ptr<cv::dnn::ReLULayer>* instance) {
	delete instance;
}

extern "C" cv::dnn::ReLULayer* cv_PtrOfReLULayer_get_inner_ptr(cv::Ptr<cv::dnn::ReLULayer>* instance) {
	return instance->get();
}

