extern "C" void cv_PtrOfTonemapDrago_delete(cv::Ptr<cv::TonemapDrago>* instance) {
	delete instance;
}

extern "C" cv::TonemapDrago* cv_PtrOfTonemapDrago_get_inner_ptr(cv::Ptr<cv::TonemapDrago>* instance) {
	return instance->get();
}

