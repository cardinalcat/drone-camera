extern "C" void cv_PtrOfFlattenLayer_delete(cv::Ptr<cv::dnn::FlattenLayer>* instance) {
	delete instance;
}

extern "C" cv::dnn::FlattenLayer* cv_PtrOfFlattenLayer_get_inner_ptr(cv::Ptr<cv::dnn::FlattenLayer>* instance) {
	return instance->get();
}

