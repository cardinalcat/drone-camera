extern "C" void cv_PtrOfTextDetectorCNN_delete(cv::Ptr<cv::text::TextDetectorCNN>* instance) {
	delete instance;
}

extern "C" cv::text::TextDetectorCNN* cv_PtrOfTextDetectorCNN_get_inner_ptr(cv::Ptr<cv::text::TextDetectorCNN>* instance) {
	return instance->get();
}

