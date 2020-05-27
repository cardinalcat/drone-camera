extern "C" void cv_PtrOfIDenseOptFlowEstimator_delete(cv::Ptr<cv::videostab::IDenseOptFlowEstimator>* instance) {
	delete instance;
}

extern "C" cv::videostab::IDenseOptFlowEstimator* cv_PtrOfIDenseOptFlowEstimator_get_inner_ptr(cv::Ptr<cv::videostab::IDenseOptFlowEstimator>* instance) {
	return instance->get();
}

