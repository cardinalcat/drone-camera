extern "C" void cv_PtrOfAlignMTB_delete(cv::Ptr<cv::AlignMTB>* instance) {
	delete instance;
}

extern "C" cv::AlignMTB* cv_PtrOfAlignMTB_get_inner_ptr(cv::Ptr<cv::AlignMTB>* instance) {
	return instance->get();
}

