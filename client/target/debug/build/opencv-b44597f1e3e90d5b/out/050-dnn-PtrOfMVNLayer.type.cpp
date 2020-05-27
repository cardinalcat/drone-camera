extern "C" void cv_PtrOfMVNLayer_delete(cv::Ptr<cv::dnn::MVNLayer>* instance) {
	delete instance;
}

extern "C" cv::dnn::MVNLayer* cv_PtrOfMVNLayer_get_inner_ptr(cv::Ptr<cv::dnn::MVNLayer>* instance) {
	return instance->get();
}

