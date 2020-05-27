extern "C" void cv_PtrOfTransientAreasSegmentationModule_delete(cv::Ptr<cv::bioinspired::TransientAreasSegmentationModule>* instance) {
	delete instance;
}

extern "C" cv::bioinspired::TransientAreasSegmentationModule* cv_PtrOfTransientAreasSegmentationModule_get_inner_ptr(cv::Ptr<cv::bioinspired::TransientAreasSegmentationModule>* instance) {
	return instance->get();
}

