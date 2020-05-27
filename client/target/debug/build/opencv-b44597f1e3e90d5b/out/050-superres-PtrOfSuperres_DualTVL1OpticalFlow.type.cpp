extern "C" void cv_PtrOfSuperres_DualTVL1OpticalFlow_delete(cv::Ptr<cv::superres::DualTVL1OpticalFlow>* instance) {
	delete instance;
}

extern "C" cv::superres::DualTVL1OpticalFlow* cv_PtrOfSuperres_DualTVL1OpticalFlow_get_inner_ptr(cv::Ptr<cv::superres::DualTVL1OpticalFlow>* instance) {
	return instance->get();
}

