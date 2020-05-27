extern "C" void cv_PtrOfTonemapMantiuk_delete(cv::Ptr<cv::TonemapMantiuk>* instance) {
	delete instance;
}

extern "C" cv::TonemapMantiuk* cv_PtrOfTonemapMantiuk_get_inner_ptr(cv::Ptr<cv::TonemapMantiuk>* instance) {
	return instance->get();
}

