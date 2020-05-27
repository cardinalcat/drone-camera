extern "C" void cv_PtrOfParamGrid_delete(cv::Ptr<cv::ml::ParamGrid>* instance) {
	delete instance;
}

extern "C" cv::ml::ParamGrid* cv_PtrOfParamGrid_get_inner_ptr(cv::Ptr<cv::ml::ParamGrid>* instance) {
	return instance->get();
}

