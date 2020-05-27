extern "C" void cv_PtrOfShapeTransformer_delete(cv::Ptr<cv::ShapeTransformer>* instance) {
	delete instance;
}

extern "C" cv::ShapeTransformer* cv_PtrOfShapeTransformer_get_inner_ptr(cv::Ptr<cv::ShapeTransformer>* instance) {
	return instance->get();
}

