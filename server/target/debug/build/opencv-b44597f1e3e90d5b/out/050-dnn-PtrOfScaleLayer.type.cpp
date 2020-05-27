extern "C" void cv_PtrOfScaleLayer_delete(cv::Ptr<cv::dnn::ScaleLayer>* instance) {
	delete instance;
}

extern "C" cv::dnn::ScaleLayer* cv_PtrOfScaleLayer_get_inner_ptr(cv::Ptr<cv::dnn::ScaleLayer>* instance) {
	return instance->get();
}

