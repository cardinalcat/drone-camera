extern "C" void cv_PtrOfRadialVarianceHash_delete(cv::Ptr<cv::img_hash::RadialVarianceHash>* instance) {
	delete instance;
}

extern "C" cv::img_hash::RadialVarianceHash* cv_PtrOfRadialVarianceHash_get_inner_ptr(cv::Ptr<cv::img_hash::RadialVarianceHash>* instance) {
	return instance->get();
}

