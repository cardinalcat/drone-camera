extern "C" void cv_PtrOfBackendWrapper_delete(cv::Ptr<cv::dnn::BackendWrapper>* instance) {
	delete instance;
}

extern "C" cv::dnn::BackendWrapper* cv_PtrOfBackendWrapper_get_inner_ptr(cv::Ptr<cv::dnn::BackendWrapper>* instance) {
	return instance->get();
}

