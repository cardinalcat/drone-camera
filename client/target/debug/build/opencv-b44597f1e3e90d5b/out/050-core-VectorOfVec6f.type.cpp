extern "C" {
	void cv_VectorOfVec6f_delete(std::vector<cv::Vec6f>* instance) {
		delete instance;
	}

	std::vector<cv::Vec6f>* cv_VectorOfVec6f_new() {
		return new std::vector<cv::Vec6f>();
	}

	size_t cv_VectorOfVec6f_len(const std::vector<cv::Vec6f>* instance) {
		return instance->size();
	}

	bool cv_VectorOfVec6f_is_empty(const std::vector<cv::Vec6f>* instance) {
		return instance->empty();
	}

	size_t cv_VectorOfVec6f_capacity(const std::vector<cv::Vec6f>* instance) {
		return instance->capacity();
	}

	void cv_VectorOfVec6f_shrink_to_fit(std::vector<cv::Vec6f>* instance) {
		instance->shrink_to_fit();
	}

	void cv_VectorOfVec6f_reserve(std::vector<cv::Vec6f>* instance, size_t additional) {
		instance->reserve(instance->size() + additional);
	}

	void cv_VectorOfVec6f_remove(std::vector<cv::Vec6f>* instance, size_t index) {
		instance->erase(instance->begin() + index);
	}

	void cv_VectorOfVec6f_swap(std::vector<cv::Vec6f>* instance, size_t index1, size_t index2) {
		std::swap((*instance)[index1], (*instance)[index2]);
	}

	void cv_VectorOfVec6f_clear(std::vector<cv::Vec6f>* instance) {
		instance->clear();
	}

	void cv_VectorOfVec6f_push(std::vector<cv::Vec6f>* instance, const cv::Vec6f* val) {
		instance->push_back(*val);
	}

	void cv_VectorOfVec6f_insert(std::vector<cv::Vec6f>* instance, size_t index, const cv::Vec6f* val) {
		instance->insert(instance->begin() + index, *val);
	}

	Result<cv::Vec6f> cv_VectorOfVec6f_get(const std::vector<cv::Vec6f>* instance, size_t index) {
		return Ok<cv::Vec6f>((*instance)[index]);
	}

	void cv_VectorOfVec6f_set(std::vector<cv::Vec6f>* instance, size_t index, const cv::Vec6f* val) {
		(*instance)[index] = *val;
	}

	const cv::Vec6f* cv_VectorOfVec6f_data(std::vector<cv::Vec6f>* instance) {
		return instance->data();
	}
	
	Result<cv::_InputArray*> cv_VectorOfVec6f_input_array(std::vector<cv::Vec6f>* instance) {
		try {
			return Ok(new cv::_InputArray(*instance));
		} OCVRS_CATCH(Result<cv::_InputArray*>)
	}
	
	Result<cv::_OutputArray*> cv_VectorOfVec6f_output_array(std::vector<cv::Vec6f>* instance) {
		try {
			return Ok(new cv::_OutputArray(*instance));
		} OCVRS_CATCH(Result<cv::_OutputArray*>)
	}
	
	Result<cv::_InputOutputArray*> cv_VectorOfVec6f_input_output_array(std::vector<cv::Vec6f>* instance) {
		try {
			return Ok(new cv::_InputOutputArray(*instance));
		} OCVRS_CATCH(Result<cv::_InputOutputArray*>)
	}
	
}

