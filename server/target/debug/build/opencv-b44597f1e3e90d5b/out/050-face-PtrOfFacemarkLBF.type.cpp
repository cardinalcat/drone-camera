extern "C" void cv_PtrOfFacemarkLBF_delete(cv::Ptr<cv::face::FacemarkLBF>* instance) {
	delete instance;
}

extern "C" cv::face::FacemarkLBF* cv_PtrOfFacemarkLBF_get_inner_ptr(cv::Ptr<cv::face::FacemarkLBF>* instance) {
	return instance->get();
}

