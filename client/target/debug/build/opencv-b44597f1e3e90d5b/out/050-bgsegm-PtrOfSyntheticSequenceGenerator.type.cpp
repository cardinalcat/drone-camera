extern "C" void cv_PtrOfSyntheticSequenceGenerator_delete(cv::Ptr<cv::bgsegm::SyntheticSequenceGenerator>* instance) {
	delete instance;
}

extern "C" cv::bgsegm::SyntheticSequenceGenerator* cv_PtrOfSyntheticSequenceGenerator_get_inner_ptr(cv::Ptr<cv::bgsegm::SyntheticSequenceGenerator>* instance) {
	return instance->get();
}

