extern "C" void cv_PtrOfILog_delete(cv::Ptr<cv::videostab::ILog>* instance) {
	delete instance;
}

extern "C" cv::videostab::ILog* cv_PtrOfILog_get_inner_ptr(cv::Ptr<cv::videostab::ILog>* instance) {
	return instance->get();
}

