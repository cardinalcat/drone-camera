extern "C" void cv_PtrOfTonemapReinhard_delete(cv::Ptr<cv::TonemapReinhard>* instance) {
	delete instance;
}

extern "C" cv::TonemapReinhard* cv_PtrOfTonemapReinhard_get_inner_ptr(cv::Ptr<cv::TonemapReinhard>* instance) {
	return instance->get();
}

