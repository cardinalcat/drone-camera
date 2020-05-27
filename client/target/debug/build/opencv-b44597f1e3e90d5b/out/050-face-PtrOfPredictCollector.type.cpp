extern "C" void cv_PtrOfPredictCollector_delete(cv::Ptr<cv::face::PredictCollector>* instance) {
	delete instance;
}

extern "C" cv::face::PredictCollector* cv_PtrOfPredictCollector_get_inner_ptr(cv::Ptr<cv::face::PredictCollector>* instance) {
	return instance->get();
}

