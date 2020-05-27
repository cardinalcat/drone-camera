extern "C" void cv_PtrOfBNLLLayer_delete(cv::Ptr<cv::dnn::BNLLLayer>* instance) {
	delete instance;
}

extern "C" cv::dnn::BNLLLayer* cv_PtrOfBNLLLayer_get_inner_ptr(cv::Ptr<cv::dnn::BNLLLayer>* instance) {
	return instance->get();
}

