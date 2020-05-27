extern "C" void cv_PtrOfLMSolver_Callback_delete(cv::Ptr<cv::LMSolver::Callback>* instance) {
	delete instance;
}

extern "C" cv::LMSolver::Callback* cv_PtrOfLMSolver_Callback_get_inner_ptr(cv::Ptr<cv::LMSolver::Callback>* instance) {
	return instance->get();
}

