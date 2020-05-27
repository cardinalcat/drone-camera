extern "C" void cv_PtrOfVariationalRefinement_delete(cv::Ptr<cv::VariationalRefinement>* instance) {
	delete instance;
}

extern "C" cv::VariationalRefinement* cv_PtrOfVariationalRefinement_get_inner_ptr(cv::Ptr<cv::VariationalRefinement>* instance) {
	return instance->get();
}

