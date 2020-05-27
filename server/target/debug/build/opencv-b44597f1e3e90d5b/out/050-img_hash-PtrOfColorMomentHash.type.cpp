extern "C" void cv_PtrOfColorMomentHash_delete(cv::Ptr<cv::img_hash::ColorMomentHash>* instance) {
	delete instance;
}

extern "C" cv::img_hash::ColorMomentHash* cv_PtrOfColorMomentHash_get_inner_ptr(cv::Ptr<cv::img_hash::ColorMomentHash>* instance) {
	return instance->get();
}

