extern "C" void cv_PtrOfPriorBoxLayer_delete(cv::Ptr<cv::dnn::PriorBoxLayer>* instance) {
	delete instance;
}

extern "C" cv::dnn::PriorBoxLayer* cv_PtrOfPriorBoxLayer_get_inner_ptr(cv::Ptr<cv::dnn::PriorBoxLayer>* instance) {
	return instance->get();
}

