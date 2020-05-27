extern "C" void cv_PtrOfAffineTransformer_delete(cv::Ptr<cv::AffineTransformer>* instance) {
	delete instance;
}

extern "C" cv::AffineTransformer* cv_PtrOfAffineTransformer_get_inner_ptr(cv::Ptr<cv::AffineTransformer>* instance) {
	return instance->get();
}

