extern "C" void cv_PtrOfOCRHolisticWordRecognizer_delete(cv::Ptr<cv::text::OCRHolisticWordRecognizer>* instance) {
	delete instance;
}

extern "C" cv::text::OCRHolisticWordRecognizer* cv_PtrOfOCRHolisticWordRecognizer_get_inner_ptr(cv::Ptr<cv::text::OCRHolisticWordRecognizer>* instance) {
	return instance->get();
}

