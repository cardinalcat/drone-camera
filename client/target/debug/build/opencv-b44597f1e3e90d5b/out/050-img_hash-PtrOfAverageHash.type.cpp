extern "C" void cv_PtrOfAverageHash_delete(cv::Ptr<cv::img_hash::AverageHash>* instance) {
	delete instance;
}

extern "C" cv::img_hash::AverageHash* cv_PtrOfAverageHash_get_inner_ptr(cv::Ptr<cv::img_hash::AverageHash>* instance) {
	return instance->get();
}

