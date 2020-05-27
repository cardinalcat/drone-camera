extern "C" void cv_PtrOfInpainterBase_delete(cv::Ptr<cv::videostab::InpainterBase>* instance) {
	delete instance;
}

extern "C" cv::videostab::InpainterBase* cv_PtrOfInpainterBase_get_inner_ptr(cv::Ptr<cv::videostab::InpainterBase>* instance) {
	return instance->get();
}

