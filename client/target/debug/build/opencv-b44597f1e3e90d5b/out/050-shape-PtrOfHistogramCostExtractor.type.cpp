extern "C" void cv_PtrOfHistogramCostExtractor_delete(cv::Ptr<cv::HistogramCostExtractor>* instance) {
	delete instance;
}

extern "C" cv::HistogramCostExtractor* cv_PtrOfHistogramCostExtractor_get_inner_ptr(cv::Ptr<cv::HistogramCostExtractor>* instance) {
	return instance->get();
}

