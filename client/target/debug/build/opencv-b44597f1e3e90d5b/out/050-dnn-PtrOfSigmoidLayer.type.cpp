extern "C" void cv_PtrOfSigmoidLayer_delete(cv::Ptr<cv::dnn::SigmoidLayer>* instance) {
	delete instance;
}

extern "C" cv::dnn::SigmoidLayer* cv_PtrOfSigmoidLayer_get_inner_ptr(cv::Ptr<cv::dnn::SigmoidLayer>* instance) {
	return instance->get();
}

