extern "C" void cv_PtrOfMinProblemSolver_Function_delete(cv::Ptr<cv::MinProblemSolver::Function>* instance) {
	delete instance;
}

extern "C" cv::MinProblemSolver::Function* cv_PtrOfMinProblemSolver_Function_get_inner_ptr(cv::Ptr<cv::MinProblemSolver::Function>* instance) {
	return instance->get();
}

