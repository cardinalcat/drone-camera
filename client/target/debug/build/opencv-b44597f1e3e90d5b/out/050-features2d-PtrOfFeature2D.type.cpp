extern "C" void cv_PtrOfFeature2D_delete(cv::Ptr<cv::Feature2D>* instance) {
	delete instance;
}

extern "C" cv::Feature2D* cv_PtrOfFeature2D_get_inner_ptr(cv::Ptr<cv::Feature2D>* instance) {
	return instance->get();
}

