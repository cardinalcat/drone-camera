extern "C" void cv_PtrOfSVM_Kernel_delete(cv::Ptr<cv::ml::SVM::Kernel>* instance) {
	delete instance;
}

extern "C" cv::ml::SVM::Kernel* cv_PtrOfSVM_Kernel_get_inner_ptr(cv::Ptr<cv::ml::SVM::Kernel>* instance) {
	return instance->get();
}

