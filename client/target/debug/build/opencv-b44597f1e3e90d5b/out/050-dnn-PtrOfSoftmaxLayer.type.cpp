extern "C" void cv_PtrOfSoftmaxLayer_delete(cv::Ptr<cv::dnn::SoftmaxLayer>* instance) {
	delete instance;
}

extern "C" cv::dnn::SoftmaxLayer* cv_PtrOfSoftmaxLayer_get_inner_ptr(cv::Ptr<cv::dnn::SoftmaxLayer>* instance) {
	return instance->get();
}

