extern "C" void cv_PtrOfFisherFaceRecognizer_delete(cv::Ptr<cv::face::FisherFaceRecognizer>* instance) {
	delete instance;
}

extern "C" cv::face::FisherFaceRecognizer* cv_PtrOfFisherFaceRecognizer_get_inner_ptr(cv::Ptr<cv::face::FisherFaceRecognizer>* instance) {
	return instance->get();
}

