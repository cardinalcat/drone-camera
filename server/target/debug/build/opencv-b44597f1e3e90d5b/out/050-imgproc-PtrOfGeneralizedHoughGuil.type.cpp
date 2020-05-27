extern "C" void cv_PtrOfGeneralizedHoughGuil_delete(cv::Ptr<cv::GeneralizedHoughGuil>* instance) {
	delete instance;
}

extern "C" cv::GeneralizedHoughGuil* cv_PtrOfGeneralizedHoughGuil_get_inner_ptr(cv::Ptr<cv::GeneralizedHoughGuil>* instance) {
	return instance->get();
}

