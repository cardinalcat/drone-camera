extern "C" void cv_PtrOfReLU6Layer_delete(cv::Ptr<cv::dnn::ReLU6Layer>* instance) {
	delete instance;
}

extern "C" cv::dnn::ReLU6Layer* cv_PtrOfReLU6Layer_get_inner_ptr(cv::Ptr<cv::dnn::ReLU6Layer>* instance) {
	return instance->get();
}

