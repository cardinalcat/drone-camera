extern "C" void cv_PtrOfGeneralizedHoughBallard_delete(cv::Ptr<cv::GeneralizedHoughBallard>* instance) {
	delete instance;
}

extern "C" cv::GeneralizedHoughBallard* cv_PtrOfGeneralizedHoughBallard_get_inner_ptr(cv::Ptr<cv::GeneralizedHoughBallard>* instance) {
	return instance->get();
}

