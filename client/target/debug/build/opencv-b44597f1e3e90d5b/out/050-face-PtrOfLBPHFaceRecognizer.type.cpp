extern "C" void cv_PtrOfLBPHFaceRecognizer_delete(cv::Ptr<cv::face::LBPHFaceRecognizer>* instance) {
	delete instance;
}

extern "C" cv::face::LBPHFaceRecognizer* cv_PtrOfLBPHFaceRecognizer_get_inner_ptr(cv::Ptr<cv::face::LBPHFaceRecognizer>* instance) {
	return instance->get();
}

