extern "C" void cv_PtrOfSuperres_BroxOpticalFlow_delete(cv::Ptr<cv::superres::BroxOpticalFlow>* instance) {
	delete instance;
}

extern "C" cv::superres::BroxOpticalFlow* cv_PtrOfSuperres_BroxOpticalFlow_get_inner_ptr(cv::Ptr<cv::superres::BroxOpticalFlow>* instance) {
	return instance->get();
}

