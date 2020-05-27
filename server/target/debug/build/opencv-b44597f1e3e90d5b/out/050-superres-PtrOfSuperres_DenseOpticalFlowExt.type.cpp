extern "C" void cv_PtrOfSuperres_DenseOpticalFlowExt_delete(cv::Ptr<cv::superres::DenseOpticalFlowExt>* instance) {
	delete instance;
}

extern "C" cv::superres::DenseOpticalFlowExt* cv_PtrOfSuperres_DenseOpticalFlowExt_get_inner_ptr(cv::Ptr<cv::superres::DenseOpticalFlowExt>* instance) {
	return instance->get();
}

