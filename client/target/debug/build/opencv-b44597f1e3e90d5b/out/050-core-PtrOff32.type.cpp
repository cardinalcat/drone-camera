extern "C" void cv_PtrOff32_delete(cv::Ptr<float>* instance) {
	delete instance;
}

extern "C" float* cv_PtrOff32_get_inner_ptr(cv::Ptr<float>* instance) {
	return instance->get();
}

