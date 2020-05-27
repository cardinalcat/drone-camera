extern "C" void cv_PtrOfGrayworldWB_delete(cv::Ptr<cv::xphoto::GrayworldWB>* instance) {
	delete instance;
}

extern "C" cv::xphoto::GrayworldWB* cv_PtrOfGrayworldWB_get_inner_ptr(cv::Ptr<cv::xphoto::GrayworldWB>* instance) {
	return instance->get();
}

