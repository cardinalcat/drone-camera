extern "C" void cv_PtrOfSuperres_SuperResolution_delete(cv::Ptr<cv::superres::SuperResolution>* instance) {
	delete instance;
}

extern "C" cv::superres::SuperResolution* cv_PtrOfSuperres_SuperResolution_get_inner_ptr(cv::Ptr<cv::superres::SuperResolution>* instance) {
	return instance->get();
}

