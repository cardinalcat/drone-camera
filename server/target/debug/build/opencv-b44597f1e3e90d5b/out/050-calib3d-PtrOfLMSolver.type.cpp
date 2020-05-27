extern "C" void cv_PtrOfLMSolver_delete(cv::Ptr<cv::LMSolver>* instance) {
	delete instance;
}

extern "C" cv::LMSolver* cv_PtrOfLMSolver_get_inner_ptr(cv::Ptr<cv::LMSolver>* instance) {
	return instance->get();
}

