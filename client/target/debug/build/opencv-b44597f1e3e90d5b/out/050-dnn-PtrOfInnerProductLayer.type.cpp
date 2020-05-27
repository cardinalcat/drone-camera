extern "C" void cv_PtrOfInnerProductLayer_delete(cv::Ptr<cv::dnn::InnerProductLayer>* instance) {
	delete instance;
}

extern "C" cv::dnn::InnerProductLayer* cv_PtrOfInnerProductLayer_get_inner_ptr(cv::Ptr<cv::dnn::InnerProductLayer>* instance) {
	return instance->get();
}

