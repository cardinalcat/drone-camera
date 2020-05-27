extern "C" void cv_PtrOfMarrHildrethHash_delete(cv::Ptr<cv::img_hash::MarrHildrethHash>* instance) {
	delete instance;
}

extern "C" cv::img_hash::MarrHildrethHash* cv_PtrOfMarrHildrethHash_get_inner_ptr(cv::Ptr<cv::img_hash::MarrHildrethHash>* instance) {
	return instance->get();
}

