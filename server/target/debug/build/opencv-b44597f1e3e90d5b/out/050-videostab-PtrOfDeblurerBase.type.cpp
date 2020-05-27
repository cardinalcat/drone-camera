extern "C" void cv_PtrOfDeblurerBase_delete(cv::Ptr<cv::videostab::DeblurerBase>* instance) {
	delete instance;
}

extern "C" cv::videostab::DeblurerBase* cv_PtrOfDeblurerBase_get_inner_ptr(cv::Ptr<cv::videostab::DeblurerBase>* instance) {
	return instance->get();
}

