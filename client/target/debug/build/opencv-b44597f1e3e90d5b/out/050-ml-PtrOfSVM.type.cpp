extern "C" void cv_PtrOfSVM_delete(cv::Ptr<cv::ml::SVM>* instance) {
	delete instance;
}

extern "C" cv::ml::SVM* cv_PtrOfSVM_get_inner_ptr(cv::Ptr<cv::ml::SVM>* instance) {
	return instance->get();
}

