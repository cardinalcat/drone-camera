extern "C" void cv_PtrOfSuperres_FrameSource_delete(cv::Ptr<cv::superres::FrameSource>* instance) {
	delete instance;
}

extern "C" cv::superres::FrameSource* cv_PtrOfSuperres_FrameSource_get_inner_ptr(cv::Ptr<cv::superres::FrameSource>* instance) {
	return instance->get();
}

