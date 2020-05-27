extern "C" void cv_PtrOfShapeContextDistanceExtractor_delete(cv::Ptr<cv::ShapeContextDistanceExtractor>* instance) {
	delete instance;
}

extern "C" cv::ShapeContextDistanceExtractor* cv_PtrOfShapeContextDistanceExtractor_get_inner_ptr(cv::Ptr<cv::ShapeContextDistanceExtractor>* instance) {
	return instance->get();
}

