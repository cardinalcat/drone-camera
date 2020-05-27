extern "C" void cv_PtrOfIFrameSource_delete(cv::Ptr<cv::videostab::IFrameSource>* instance) {
	delete instance;
}

extern "C" cv::videostab::IFrameSource* cv_PtrOfIFrameSource_get_inner_ptr(cv::Ptr<cv::videostab::IFrameSource>* instance) {
	return instance->get();
}

