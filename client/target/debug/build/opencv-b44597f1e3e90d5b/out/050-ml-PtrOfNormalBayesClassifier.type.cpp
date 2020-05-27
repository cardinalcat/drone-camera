extern "C" void cv_PtrOfNormalBayesClassifier_delete(cv::Ptr<cv::ml::NormalBayesClassifier>* instance) {
	delete instance;
}

extern "C" cv::ml::NormalBayesClassifier* cv_PtrOfNormalBayesClassifier_get_inner_ptr(cv::Ptr<cv::ml::NormalBayesClassifier>* instance) {
	return instance->get();
}

