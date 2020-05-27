extern "C" void cv_PtrOfBatchNormLayer_delete(cv::Ptr<cv::dnn::BatchNormLayer>* instance) {
	delete instance;
}

extern "C" cv::dnn::BatchNormLayer* cv_PtrOfBatchNormLayer_get_inner_ptr(cv::Ptr<cv::dnn::BatchNormLayer>* instance) {
	return instance->get();
}

