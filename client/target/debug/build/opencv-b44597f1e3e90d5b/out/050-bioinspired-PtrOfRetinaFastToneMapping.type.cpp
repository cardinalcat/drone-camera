extern "C" void cv_PtrOfRetinaFastToneMapping_delete(cv::Ptr<cv::bioinspired::RetinaFastToneMapping>* instance) {
	delete instance;
}

extern "C" cv::bioinspired::RetinaFastToneMapping* cv_PtrOfRetinaFastToneMapping_get_inner_ptr(cv::Ptr<cv::bioinspired::RetinaFastToneMapping>* instance) {
	return instance->get();
}

