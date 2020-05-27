extern "C" void cv_PtrOfResizeLayer_delete(cv::Ptr<cv::dnn::ResizeLayer>* instance) {
	delete instance;
}

extern "C" cv::dnn::ResizeLayer* cv_PtrOfResizeLayer_get_inner_ptr(cv::Ptr<cv::dnn::ResizeLayer>* instance) {
	return instance->get();
}

