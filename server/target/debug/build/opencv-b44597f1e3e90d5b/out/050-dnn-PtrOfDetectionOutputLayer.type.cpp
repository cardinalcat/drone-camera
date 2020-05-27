extern "C" void cv_PtrOfDetectionOutputLayer_delete(cv::Ptr<cv::dnn::DetectionOutputLayer>* instance) {
	delete instance;
}

extern "C" cv::dnn::DetectionOutputLayer* cv_PtrOfDetectionOutputLayer_get_inner_ptr(cv::Ptr<cv::dnn::DetectionOutputLayer>* instance) {
	return instance->get();
}

