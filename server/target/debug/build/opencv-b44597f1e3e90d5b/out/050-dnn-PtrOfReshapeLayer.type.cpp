extern "C" void cv_PtrOfReshapeLayer_delete(cv::Ptr<cv::dnn::ReshapeLayer>* instance) {
	delete instance;
}

extern "C" cv::dnn::ReshapeLayer* cv_PtrOfReshapeLayer_get_inner_ptr(cv::Ptr<cv::dnn::ReshapeLayer>* instance) {
	return instance->get();
}

