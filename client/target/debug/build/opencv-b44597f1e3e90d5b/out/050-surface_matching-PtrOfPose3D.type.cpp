extern "C" void cv_PtrOfPose3D_delete(cv::Ptr<cv::ppf_match_3d::Pose3D>* instance) {
	delete instance;
}

extern "C" cv::ppf_match_3d::Pose3D* cv_PtrOfPose3D_get_inner_ptr(cv::Ptr<cv::ppf_match_3d::Pose3D>* instance) {
	return instance->get();
}

