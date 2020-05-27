extern "C" void cv_PtrOfMergeRobertson_delete(cv::Ptr<cv::MergeRobertson>* instance) {
	delete instance;
}

extern "C" cv::MergeRobertson* cv_PtrOfMergeRobertson_get_inner_ptr(cv::Ptr<cv::MergeRobertson>* instance) {
	return instance->get();
}

