extern "C" void cv_PtrOfLearningBasedWB_delete(cv::Ptr<cv::xphoto::LearningBasedWB>* instance) {
	delete instance;
}

extern "C" cv::xphoto::LearningBasedWB* cv_PtrOfLearningBasedWB_get_inner_ptr(cv::Ptr<cv::xphoto::LearningBasedWB>* instance) {
	return instance->get();
}

