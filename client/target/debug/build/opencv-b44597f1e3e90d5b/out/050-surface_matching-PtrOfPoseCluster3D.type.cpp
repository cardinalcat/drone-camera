extern "C" void cv_PtrOfPoseCluster3D_delete(cv::Ptr<cv::ppf_match_3d::PoseCluster3D>* instance) {
	delete instance;
}

extern "C" cv::ppf_match_3d::PoseCluster3D* cv_PtrOfPoseCluster3D_get_inner_ptr(cv::Ptr<cv::ppf_match_3d::PoseCluster3D>* instance) {
	return instance->get();
}

