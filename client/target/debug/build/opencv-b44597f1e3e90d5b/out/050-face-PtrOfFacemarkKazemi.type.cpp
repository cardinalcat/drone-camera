extern "C" void cv_PtrOfFacemarkKazemi_delete(cv::Ptr<cv::face::FacemarkKazemi>* instance) {
	delete instance;
}

extern "C" cv::face::FacemarkKazemi* cv_PtrOfFacemarkKazemi_get_inner_ptr(cv::Ptr<cv::face::FacemarkKazemi>* instance) {
	return instance->get();
}

