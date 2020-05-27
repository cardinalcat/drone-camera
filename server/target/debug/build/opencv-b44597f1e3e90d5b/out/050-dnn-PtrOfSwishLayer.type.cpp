extern "C" void cv_PtrOfSwishLayer_delete(cv::Ptr<cv::dnn::SwishLayer>* instance) {
	delete instance;
}

extern "C" cv::dnn::SwishLayer* cv_PtrOfSwishLayer_get_inner_ptr(cv::Ptr<cv::dnn::SwishLayer>* instance) {
	return instance->get();
}

