extern "C" void cv_PtrOfFarnebackOpticalFlow_delete(cv::Ptr<cv::FarnebackOpticalFlow>* instance) {
	delete instance;
}

extern "C" cv::FarnebackOpticalFlow* cv_PtrOfFarnebackOpticalFlow_get_inner_ptr(cv::Ptr<cv::FarnebackOpticalFlow>* instance) {
	return instance->get();
}

