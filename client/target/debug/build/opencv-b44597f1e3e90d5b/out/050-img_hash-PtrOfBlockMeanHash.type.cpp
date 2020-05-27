extern "C" void cv_PtrOfBlockMeanHash_delete(cv::Ptr<cv::img_hash::BlockMeanHash>* instance) {
	delete instance;
}

extern "C" cv::img_hash::BlockMeanHash* cv_PtrOfBlockMeanHash_get_inner_ptr(cv::Ptr<cv::img_hash::BlockMeanHash>* instance) {
	return instance->get();
}

