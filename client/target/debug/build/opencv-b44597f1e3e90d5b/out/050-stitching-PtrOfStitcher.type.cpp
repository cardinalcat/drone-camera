extern "C" void cv_PtrOfStitcher_delete(cv::Ptr<cv::Stitcher>* instance) {
	delete instance;
}

extern "C" cv::Stitcher* cv_PtrOfStitcher_get_inner_ptr(cv::Ptr<cv::Stitcher>* instance) {
	return instance->get();
}

