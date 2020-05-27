extern "C" void cv_PtrOfBinaryDescriptor_delete(cv::Ptr<cv::line_descriptor::BinaryDescriptor>* instance) {
	delete instance;
}

extern "C" cv::line_descriptor::BinaryDescriptor* cv_PtrOfBinaryDescriptor_get_inner_ptr(cv::Ptr<cv::line_descriptor::BinaryDescriptor>* instance) {
	return instance->get();
}

