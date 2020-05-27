extern "C" void cv_PtrOfPoolingLayer_delete(cv::Ptr<cv::dnn::PoolingLayer>* instance) {
	delete instance;
}

extern "C" cv::dnn::PoolingLayer* cv_PtrOfPoolingLayer_get_inner_ptr(cv::Ptr<cv::dnn::PoolingLayer>* instance) {
	return instance->get();
}

