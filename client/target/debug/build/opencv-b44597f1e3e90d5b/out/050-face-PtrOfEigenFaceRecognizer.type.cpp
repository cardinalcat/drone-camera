extern "C" void cv_PtrOfEigenFaceRecognizer_delete(cv::Ptr<cv::face::EigenFaceRecognizer>* instance) {
	delete instance;
}

extern "C" cv::face::EigenFaceRecognizer* cv_PtrOfEigenFaceRecognizer_get_inner_ptr(cv::Ptr<cv::face::EigenFaceRecognizer>* instance) {
	return instance->get();
}

