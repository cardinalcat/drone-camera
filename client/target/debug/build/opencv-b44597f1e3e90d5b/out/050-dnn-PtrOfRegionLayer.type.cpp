extern "C" void cv_PtrOfRegionLayer_delete(cv::Ptr<cv::dnn::RegionLayer>* instance) {
	delete instance;
}

extern "C" cv::dnn::RegionLayer* cv_PtrOfRegionLayer_get_inner_ptr(cv::Ptr<cv::dnn::RegionLayer>* instance) {
	return instance->get();
}

