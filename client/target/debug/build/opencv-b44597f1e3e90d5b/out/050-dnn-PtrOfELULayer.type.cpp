extern "C" void cv_PtrOfELULayer_delete(cv::Ptr<cv::dnn::ELULayer>* instance) {
	delete instance;
}

extern "C" cv::dnn::ELULayer* cv_PtrOfELULayer_get_inner_ptr(cv::Ptr<cv::dnn::ELULayer>* instance) {
	return instance->get();
}

