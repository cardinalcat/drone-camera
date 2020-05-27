extern "C" void cv_PtrOfTrainData_delete(cv::Ptr<cv::ml::TrainData>* instance) {
	delete instance;
}

extern "C" cv::ml::TrainData* cv_PtrOfTrainData_get_inner_ptr(cv::Ptr<cv::ml::TrainData>* instance) {
	return instance->get();
}

