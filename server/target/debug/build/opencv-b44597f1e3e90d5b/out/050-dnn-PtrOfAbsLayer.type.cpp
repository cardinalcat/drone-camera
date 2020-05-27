extern "C" void cv_PtrOfAbsLayer_delete(cv::Ptr<cv::dnn::AbsLayer>* instance) {
	delete instance;
}

extern "C" cv::dnn::AbsLayer* cv_PtrOfAbsLayer_get_inner_ptr(cv::Ptr<cv::dnn::AbsLayer>* instance) {
	return instance->get();
}

