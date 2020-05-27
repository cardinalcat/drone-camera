extern "C" void cv_PtrOfTanHLayer_delete(cv::Ptr<cv::dnn::TanHLayer>* instance) {
	delete instance;
}

extern "C" cv::dnn::TanHLayer* cv_PtrOfTanHLayer_get_inner_ptr(cv::Ptr<cv::dnn::TanHLayer>* instance) {
	return instance->get();
}

