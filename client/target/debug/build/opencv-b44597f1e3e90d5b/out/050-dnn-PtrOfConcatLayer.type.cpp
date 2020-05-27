extern "C" void cv_PtrOfConcatLayer_delete(cv::Ptr<cv::dnn::ConcatLayer>* instance) {
	delete instance;
}

extern "C" cv::dnn::ConcatLayer* cv_PtrOfConcatLayer_get_inner_ptr(cv::Ptr<cv::dnn::ConcatLayer>* instance) {
	return instance->get();
}

