extern "C" void cv_PtrOfLSDDetector_delete(cv::Ptr<cv::line_descriptor::LSDDetector>* instance) {
	delete instance;
}

extern "C" cv::line_descriptor::LSDDetector* cv_PtrOfLSDDetector_get_inner_ptr(cv::Ptr<cv::line_descriptor::LSDDetector>* instance) {
	return instance->get();
}

