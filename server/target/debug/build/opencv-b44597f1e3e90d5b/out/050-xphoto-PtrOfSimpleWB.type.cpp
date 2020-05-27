extern "C" void cv_PtrOfSimpleWB_delete(cv::Ptr<cv::xphoto::SimpleWB>* instance) {
	delete instance;
}

extern "C" cv::xphoto::SimpleWB* cv_PtrOfSimpleWB_get_inner_ptr(cv::Ptr<cv::xphoto::SimpleWB>* instance) {
	return instance->get();
}

