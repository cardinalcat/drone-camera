extern "C" void cv_PtrOfReorgLayer_delete(cv::Ptr<cv::dnn::ReorgLayer>* instance) {
	delete instance;
}

extern "C" cv::dnn::ReorgLayer* cv_PtrOfReorgLayer_get_inner_ptr(cv::Ptr<cv::dnn::ReorgLayer>* instance) {
	return instance->get();
}

