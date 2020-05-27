extern "C" void cv_PtrOfMaxUnpoolLayer_delete(cv::Ptr<cv::dnn::MaxUnpoolLayer>* instance) {
	delete instance;
}

extern "C" cv::dnn::MaxUnpoolLayer* cv_PtrOfMaxUnpoolLayer_get_inner_ptr(cv::Ptr<cv::dnn::MaxUnpoolLayer>* instance) {
	return instance->get();
}

