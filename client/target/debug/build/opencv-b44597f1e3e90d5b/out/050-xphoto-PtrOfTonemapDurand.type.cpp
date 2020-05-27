extern "C" void cv_PtrOfTonemapDurand_delete(cv::Ptr<cv::xphoto::TonemapDurand>* instance) {
	delete instance;
}

extern "C" cv::xphoto::TonemapDurand* cv_PtrOfTonemapDurand_get_inner_ptr(cv::Ptr<cv::xphoto::TonemapDurand>* instance) {
	return instance->get();
}

