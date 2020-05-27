extern "C" void cv_PtrOfRetina_delete(cv::Ptr<cv::bioinspired::Retina>* instance) {
	delete instance;
}

extern "C" cv::bioinspired::Retina* cv_PtrOfRetina_get_inner_ptr(cv::Ptr<cv::bioinspired::Retina>* instance) {
	return instance->get();
}

