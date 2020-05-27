extern "C" void cv_PtrOfPaddingLayer_delete(cv::Ptr<cv::dnn::PaddingLayer>* instance) {
	delete instance;
}

extern "C" cv::dnn::PaddingLayer* cv_PtrOfPaddingLayer_get_inner_ptr(cv::Ptr<cv::dnn::PaddingLayer>* instance) {
	return instance->get();
}

