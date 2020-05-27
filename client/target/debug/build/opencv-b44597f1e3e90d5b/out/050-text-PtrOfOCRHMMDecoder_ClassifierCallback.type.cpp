extern "C" void cv_PtrOfOCRHMMDecoder_ClassifierCallback_delete(cv::Ptr<cv::text::OCRHMMDecoder::ClassifierCallback>* instance) {
	delete instance;
}

extern "C" cv::text::OCRHMMDecoder::ClassifierCallback* cv_PtrOfOCRHMMDecoder_ClassifierCallback_get_inner_ptr(cv::Ptr<cv::text::OCRHMMDecoder::ClassifierCallback>* instance) {
	return instance->get();
}

