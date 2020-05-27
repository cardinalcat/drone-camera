extern "C" void cv_PtrOfStereoSGBM_delete(cv::Ptr<cv::StereoSGBM>* instance) {
	delete instance;
}

extern "C" cv::StereoSGBM* cv_PtrOfStereoSGBM_get_inner_ptr(cv::Ptr<cv::StereoSGBM>* instance) {
	return instance->get();
}

