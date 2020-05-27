extern "C" void cv_PtrOfOCRBeamSearchDecoder_ClassifierCallback_delete(cv::Ptr<cv::text::OCRBeamSearchDecoder::ClassifierCallback>* instance) {
	delete instance;
}

extern "C" cv::text::OCRBeamSearchDecoder::ClassifierCallback* cv_PtrOfOCRBeamSearchDecoder_ClassifierCallback_get_inner_ptr(cv::Ptr<cv::text::OCRBeamSearchDecoder::ClassifierCallback>* instance) {
	return instance->get();
}

