extern "C" void cv_PtrOfActivationLayer_delete(cv::Ptr<cv::dnn::ActivationLayer>* instance) {
	delete instance;
}

extern "C" cv::dnn::ActivationLayer* cv_PtrOfActivationLayer_get_inner_ptr(cv::Ptr<cv::dnn::ActivationLayer>* instance) {
	return instance->get();
}

