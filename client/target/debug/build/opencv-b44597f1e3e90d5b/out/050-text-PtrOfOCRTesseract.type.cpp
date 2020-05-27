extern "C" void cv_PtrOfOCRTesseract_delete(cv::Ptr<cv::text::OCRTesseract>* instance) {
	delete instance;
}

extern "C" cv::text::OCRTesseract* cv_PtrOfOCRTesseract_get_inner_ptr(cv::Ptr<cv::text::OCRTesseract>* instance) {
	return instance->get();
}

