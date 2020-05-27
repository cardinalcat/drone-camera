extern "C" void cv_PtrOfLayer_delete(cv::Ptr<cv::dnn::Layer>* instance) {
	delete instance;
}

extern "C" cv::dnn::Layer* cv_PtrOfLayer_get_inner_ptr(cv::Ptr<cv::dnn::Layer>* instance) {
	return instance->get();
}

