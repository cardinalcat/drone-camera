extern "C" void cv_PtrOfFacemarkAAM_delete(cv::Ptr<cv::face::FacemarkAAM>* instance) {
	delete instance;
}

extern "C" cv::face::FacemarkAAM* cv_PtrOfFacemarkAAM_get_inner_ptr(cv::Ptr<cv::face::FacemarkAAM>* instance) {
	return instance->get();
}

