extern "C" void cv_PtrOfANN_MLP_delete(cv::Ptr<cv::ml::ANN_MLP>* instance) {
	delete instance;
}

extern "C" cv::ml::ANN_MLP* cv_PtrOfANN_MLP_get_inner_ptr(cv::Ptr<cv::ml::ANN_MLP>* instance) {
	return instance->get();
}

