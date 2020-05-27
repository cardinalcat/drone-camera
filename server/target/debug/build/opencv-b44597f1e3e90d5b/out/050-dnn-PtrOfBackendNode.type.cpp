extern "C" void cv_PtrOfBackendNode_delete(cv::Ptr<cv::dnn::BackendNode>* instance) {
	delete instance;
}

extern "C" cv::dnn::BackendNode* cv_PtrOfBackendNode_get_inner_ptr(cv::Ptr<cv::dnn::BackendNode>* instance) {
	return instance->get();
}

