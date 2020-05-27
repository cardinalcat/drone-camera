extern "C" void cv_PtrOfOCRHMMDecoder_delete(cv::Ptr<cv::text::OCRHMMDecoder>* instance) {
	delete instance;
}

extern "C" cv::text::OCRHMMDecoder* cv_PtrOfOCRHMMDecoder_get_inner_ptr(cv::Ptr<cv::text::OCRHMMDecoder>* instance) {
	return instance->get();
}

