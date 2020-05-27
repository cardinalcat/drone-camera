extern "C" void cv_PtrOfConjGradSolver_delete(cv::Ptr<cv::ConjGradSolver>* instance) {
	delete instance;
}

extern "C" cv::ConjGradSolver* cv_PtrOfConjGradSolver_get_inner_ptr(cv::Ptr<cv::ConjGradSolver>* instance) {
	return instance->get();
}

