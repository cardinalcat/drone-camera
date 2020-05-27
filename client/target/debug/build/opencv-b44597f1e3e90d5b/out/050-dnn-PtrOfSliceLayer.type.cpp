extern "C" void cv_PtrOfSliceLayer_delete(cv::Ptr<cv::dnn::SliceLayer>* instance) {
	delete instance;
}

extern "C" cv::dnn::SliceLayer* cv_PtrOfSliceLayer_get_inner_ptr(cv::Ptr<cv::dnn::SliceLayer>* instance) {
	return instance->get();
}

