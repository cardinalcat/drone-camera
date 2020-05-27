extern "C" void cv_PtrOfCalibrateRobertson_delete(cv::Ptr<cv::CalibrateRobertson>* instance) {
	delete instance;
}

extern "C" cv::CalibrateRobertson* cv_PtrOfCalibrateRobertson_get_inner_ptr(cv::Ptr<cv::CalibrateRobertson>* instance) {
	return instance->get();
}

