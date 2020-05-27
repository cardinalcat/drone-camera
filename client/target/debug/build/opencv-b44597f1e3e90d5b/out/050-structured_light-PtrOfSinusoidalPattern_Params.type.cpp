extern "C" void cv_PtrOfSinusoidalPattern_Params_delete(cv::Ptr<cv::structured_light::SinusoidalPattern::Params>* instance) {
	delete instance;
}

extern "C" cv::structured_light::SinusoidalPattern::Params* cv_PtrOfSinusoidalPattern_Params_get_inner_ptr(cv::Ptr<cv::structured_light::SinusoidalPattern::Params>* instance) {
	return instance->get();
}

