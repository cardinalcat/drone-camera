extern "C" void cv_PtrOfRTrees_delete(cv::Ptr<cv::ml::RTrees>* instance) {
	delete instance;
}

extern "C" cv::ml::RTrees* cv_PtrOfRTrees_get_inner_ptr(cv::Ptr<cv::ml::RTrees>* instance) {
	return instance->get();
}

