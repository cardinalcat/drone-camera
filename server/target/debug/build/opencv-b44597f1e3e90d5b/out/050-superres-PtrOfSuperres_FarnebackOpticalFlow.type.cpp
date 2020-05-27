extern "C" void cv_PtrOfSuperres_FarnebackOpticalFlow_delete(cv::Ptr<cv::superres::FarnebackOpticalFlow>* instance) {
	delete instance;
}

extern "C" cv::superres::FarnebackOpticalFlow* cv_PtrOfSuperres_FarnebackOpticalFlow_get_inner_ptr(cv::Ptr<cv::superres::FarnebackOpticalFlow>* instance) {
	return instance->get();
}

