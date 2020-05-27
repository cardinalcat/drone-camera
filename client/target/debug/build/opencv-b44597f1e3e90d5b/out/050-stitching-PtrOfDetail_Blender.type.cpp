extern "C" void cv_PtrOfDetail_Blender_delete(cv::Ptr<cv::detail::Blender>* instance) {
	delete instance;
}

extern "C" cv::detail::Blender* cv_PtrOfDetail_Blender_get_inner_ptr(cv::Ptr<cv::detail::Blender>* instance) {
	return instance->get();
}

