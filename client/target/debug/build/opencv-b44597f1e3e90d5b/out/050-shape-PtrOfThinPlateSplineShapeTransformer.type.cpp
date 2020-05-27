extern "C" void cv_PtrOfThinPlateSplineShapeTransformer_delete(cv::Ptr<cv::ThinPlateSplineShapeTransformer>* instance) {
	delete instance;
}

extern "C" cv::ThinPlateSplineShapeTransformer* cv_PtrOfThinPlateSplineShapeTransformer_get_inner_ptr(cv::Ptr<cv::ThinPlateSplineShapeTransformer>* instance) {
	return instance->get();
}

