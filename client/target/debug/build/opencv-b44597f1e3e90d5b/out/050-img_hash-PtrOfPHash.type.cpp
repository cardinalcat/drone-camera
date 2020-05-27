extern "C" void cv_PtrOfPHash_delete(cv::Ptr<cv::img_hash::PHash>* instance) {
	delete instance;
}

extern "C" cv::img_hash::PHash* cv_PtrOfPHash_get_inner_ptr(cv::Ptr<cv::img_hash::PHash>* instance) {
	return instance->get();
}

