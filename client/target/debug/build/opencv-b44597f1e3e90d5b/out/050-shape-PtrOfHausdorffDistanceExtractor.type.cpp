extern "C" void cv_PtrOfHausdorffDistanceExtractor_delete(cv::Ptr<cv::HausdorffDistanceExtractor>* instance) {
	delete instance;
}

extern "C" cv::HausdorffDistanceExtractor* cv_PtrOfHausdorffDistanceExtractor_get_inner_ptr(cv::Ptr<cv::HausdorffDistanceExtractor>* instance) {
	return instance->get();
}

