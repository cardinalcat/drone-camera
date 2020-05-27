extern "C" void cv_PtrOfSparsePyrLKOpticalFlow_delete(cv::Ptr<cv::SparsePyrLKOpticalFlow>* instance) {
	delete instance;
}

extern "C" cv::SparsePyrLKOpticalFlow* cv_PtrOfSparsePyrLKOpticalFlow_get_inner_ptr(cv::Ptr<cv::SparsePyrLKOpticalFlow>* instance) {
	return instance->get();
}

