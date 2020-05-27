extern "C" void cv_PtrOfDISOpticalFlow_delete(cv::Ptr<cv::DISOpticalFlow>* instance) {
	delete instance;
}

extern "C" cv::DISOpticalFlow* cv_PtrOfDISOpticalFlow_get_inner_ptr(cv::Ptr<cv::DISOpticalFlow>* instance) {
	return instance->get();
}

