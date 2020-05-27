extern "C" void cv_PtrOfProposalLayer_delete(cv::Ptr<cv::dnn::ProposalLayer>* instance) {
	delete instance;
}

extern "C" cv::dnn::ProposalLayer* cv_PtrOfProposalLayer_get_inner_ptr(cv::Ptr<cv::dnn::ProposalLayer>* instance) {
	return instance->get();
}

