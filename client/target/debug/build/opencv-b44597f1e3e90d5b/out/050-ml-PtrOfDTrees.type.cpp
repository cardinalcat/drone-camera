extern "C" void cv_PtrOfDTrees_delete(cv::Ptr<cv::ml::DTrees>* instance) {
	delete instance;
}

extern "C" cv::ml::DTrees* cv_PtrOfDTrees_get_inner_ptr(cv::Ptr<cv::ml::DTrees>* instance) {
	return instance->get();
}

