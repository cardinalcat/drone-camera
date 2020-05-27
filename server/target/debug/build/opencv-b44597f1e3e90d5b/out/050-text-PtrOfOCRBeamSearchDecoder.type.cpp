extern "C" void cv_PtrOfOCRBeamSearchDecoder_delete(cv::Ptr<cv::text::OCRBeamSearchDecoder>* instance) {
	delete instance;
}

extern "C" cv::text::OCRBeamSearchDecoder* cv_PtrOfOCRBeamSearchDecoder_get_inner_ptr(cv::Ptr<cv::text::OCRBeamSearchDecoder>* instance) {
	return instance->get();
}

