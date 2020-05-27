extern "C" void cv_PtrOfSVMSGD_delete(cv::Ptr<cv::ml::SVMSGD>* instance) {
	delete instance;
}

extern "C" cv::ml::SVMSGD* cv_PtrOfSVMSGD_get_inner_ptr(cv::Ptr<cv::ml::SVMSGD>* instance) {
	return instance->get();
}

