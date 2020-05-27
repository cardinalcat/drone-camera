extern "C" void cv_PtrOfGridBoard_delete(cv::Ptr<cv::aruco::GridBoard>* instance) {
	delete instance;
}

extern "C" cv::aruco::GridBoard* cv_PtrOfGridBoard_get_inner_ptr(cv::Ptr<cv::aruco::GridBoard>* instance) {
	return instance->get();
}

