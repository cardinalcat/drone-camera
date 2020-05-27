extern "C" void cv_PtrOfFacemark_delete(cv::Ptr<cv::face::Facemark>* instance) {
	delete instance;
}

extern "C" cv::face::Facemark* cv_PtrOfFacemark_get_inner_ptr(cv::Ptr<cv::face::Facemark>* instance) {
	return instance->get();
}

