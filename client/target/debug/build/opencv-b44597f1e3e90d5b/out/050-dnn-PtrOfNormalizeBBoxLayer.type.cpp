extern "C" void cv_PtrOfNormalizeBBoxLayer_delete(cv::Ptr<cv::dnn::NormalizeBBoxLayer>* instance) {
	delete instance;
}

extern "C" cv::dnn::NormalizeBBoxLayer* cv_PtrOfNormalizeBBoxLayer_get_inner_ptr(cv::Ptr<cv::dnn::NormalizeBBoxLayer>* instance) {
	return instance->get();
}

