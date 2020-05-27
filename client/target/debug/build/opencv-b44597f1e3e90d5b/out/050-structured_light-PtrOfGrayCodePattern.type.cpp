extern "C" void cv_PtrOfGrayCodePattern_delete(cv::Ptr<cv::structured_light::GrayCodePattern>* instance) {
	delete instance;
}

extern "C" cv::structured_light::GrayCodePattern* cv_PtrOfGrayCodePattern_get_inner_ptr(cv::Ptr<cv::structured_light::GrayCodePattern>* instance) {
	return instance->get();
}

