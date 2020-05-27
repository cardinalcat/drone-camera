extern "C" void cv_PtrOfMishLayer_delete(cv::Ptr<cv::dnn::MishLayer>* instance) {
	delete instance;
}

extern "C" cv::dnn::MishLayer* cv_PtrOfMishLayer_get_inner_ptr(cv::Ptr<cv::dnn::MishLayer>* instance) {
	return instance->get();
}

