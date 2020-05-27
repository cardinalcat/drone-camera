extern "C" void cv_PtrOfWarperCreator_delete(cv::Ptr<cv::WarperCreator>* instance) {
	delete instance;
}

extern "C" cv::WarperCreator* cv_PtrOfWarperCreator_get_inner_ptr(cv::Ptr<cv::WarperCreator>* instance) {
	return instance->get();
}

