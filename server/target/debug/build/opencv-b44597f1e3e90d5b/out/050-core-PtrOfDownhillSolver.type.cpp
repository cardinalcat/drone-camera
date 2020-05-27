extern "C" void cv_PtrOfDownhillSolver_delete(cv::Ptr<cv::DownhillSolver>* instance) {
	delete instance;
}

extern "C" cv::DownhillSolver* cv_PtrOfDownhillSolver_get_inner_ptr(cv::Ptr<cv::DownhillSolver>* instance) {
	return instance->get();
}

