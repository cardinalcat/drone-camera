extern "C" void cv_PtrOfSuperres_PyrLKOpticalFlow_delete(cv::Ptr<cv::superres::PyrLKOpticalFlow>* instance) {
	delete instance;
}

extern "C" cv::superres::PyrLKOpticalFlow* cv_PtrOfSuperres_PyrLKOpticalFlow_get_inner_ptr(cv::Ptr<cv::superres::PyrLKOpticalFlow>* instance) {
	return instance->get();
}

