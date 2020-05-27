extern "C" void cv_PtrOfPowerLayer_delete(cv::Ptr<cv::dnn::PowerLayer>* instance) {
	delete instance;
}

extern "C" cv::dnn::PowerLayer* cv_PtrOfPowerLayer_get_inner_ptr(cv::Ptr<cv::dnn::PowerLayer>* instance) {
	return instance->get();
}

