extern "C" void cv_PtrOfBaseCascadeClassifier_delete(cv::Ptr<cv::BaseCascadeClassifier>* instance) {
	delete instance;
}

extern "C" cv::BaseCascadeClassifier* cv_PtrOfBaseCascadeClassifier_get_inner_ptr(cv::Ptr<cv::BaseCascadeClassifier>* instance) {
	return instance->get();
}

