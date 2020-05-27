extern "C" void cv_PtrOfSinusoidalPattern_delete(cv::Ptr<cv::structured_light::SinusoidalPattern>* instance) {
	delete instance;
}

extern "C" cv::structured_light::SinusoidalPattern* cv_PtrOfSinusoidalPattern_get_inner_ptr(cv::Ptr<cv::structured_light::SinusoidalPattern>* instance) {
	return instance->get();
}

