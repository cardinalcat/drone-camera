extern "C" void cv_PtrOfISparseOptFlowEstimator_delete(cv::Ptr<cv::videostab::ISparseOptFlowEstimator>* instance) {
	delete instance;
}

extern "C" cv::videostab::ISparseOptFlowEstimator* cv_PtrOfISparseOptFlowEstimator_get_inner_ptr(cv::Ptr<cv::videostab::ISparseOptFlowEstimator>* instance) {
	return instance->get();
}

