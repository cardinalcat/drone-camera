extern "C" void cv_PtrOfLogisticRegression_delete(cv::Ptr<cv::ml::LogisticRegression>* instance) {
	delete instance;
}

extern "C" cv::ml::LogisticRegression* cv_PtrOfLogisticRegression_get_inner_ptr(cv::Ptr<cv::ml::LogisticRegression>* instance) {
	return instance->get();
}

