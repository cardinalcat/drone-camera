extern "C" void cv_PtrOfWobbleSuppressorBase_delete(cv::Ptr<cv::videostab::WobbleSuppressorBase>* instance) {
	delete instance;
}

extern "C" cv::videostab::WobbleSuppressorBase* cv_PtrOfWobbleSuppressorBase_get_inner_ptr(cv::Ptr<cv::videostab::WobbleSuppressorBase>* instance) {
	return instance->get();
}

