extern "C" void cv_PtrOfMergeDebevec_delete(cv::Ptr<cv::MergeDebevec>* instance) {
	delete instance;
}

extern "C" cv::MergeDebevec* cv_PtrOfMergeDebevec_get_inner_ptr(cv::Ptr<cv::MergeDebevec>* instance) {
	return instance->get();
}

