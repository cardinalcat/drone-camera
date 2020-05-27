extern "C" void cv_PtrOfIOutlierRejector_delete(cv::Ptr<cv::videostab::IOutlierRejector>* instance) {
	delete instance;
}

extern "C" cv::videostab::IOutlierRejector* cv_PtrOfIOutlierRejector_get_inner_ptr(cv::Ptr<cv::videostab::IOutlierRejector>* instance) {
	return instance->get();
}

