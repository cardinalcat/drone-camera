extern "C" {
	void cv_VectorOfSize_delete(std::vector<cv::Size>* instance) {
		delete instance;
	}

	std::vector<cv::Size>* cv_VectorOfSize_new() {
		return new std::vector<cv::Size>();
	}

	size_t cv_VectorOfSize_len(const std::vector<cv::Size>* instance) {
		return instance->size();
	}

	bool cv_VectorOfSize_is_empty(const std::vector<cv::Size>* instance) {
		return instance->empty();
	}

	size_t cv_VectorOfSize_capacity(const std::vector<cv::Size>* instance) {
		return instance->capacity();
	}

	void cv_VectorOfSize_shrink_to_fit(std::vector<cv::Size>* instance) {
		instance->shrink_to_fit();
	}

	void cv_VectorOfSize_reserve(std::vector<cv::Size>* instance, size_t additional) {
		instance->reserve(instance->size() + additional);
	}

	void cv_VectorOfSize_remove(std::vector<cv::Size>* instance, size_t index) {
		instance->erase(instance->begin() + index);
	}

	void cv_VectorOfSize_swap(std::vector<cv::Size>* instance, size_t index1, size_t index2) {
		std::swap((*instance)[index1], (*instance)[index2]);
	}

	void cv_VectorOfSize_clear(std::vector<cv::Size>* instance) {
		instance->clear();
	}

	void cv_VectorOfSize_push(std::vector<cv::Size>* instance, const cv::Size* val) {
		instance->push_back(*val);
	}

	void cv_VectorOfSize_insert(std::vector<cv::Size>* instance, size_t index, const cv::Size* val) {
		instance->insert(instance->begin() + index, *val);
	}

	Result<cv::Size> cv_VectorOfSize_get(const std::vector<cv::Size>* instance, size_t index) {
		return Ok<cv::Size>((*instance)[index]);
	}

	void cv_VectorOfSize_set(std::vector<cv::Size>* instance, size_t index, const cv::Size* val) {
		(*instance)[index] = *val;
	}

	const cv::Size* cv_VectorOfSize_data(std::vector<cv::Size>* instance) {
		return instance->data();
	}
	
	Result<cv::_InputArray*> cv_VectorOfSize_input_array(std::vector<cv::Size>* instance) {
		try {
			return Ok(new cv::_InputArray(*instance));
		} OCVRS_CATCH(Result<cv::_InputArray*>)
	}
	
	Result<cv::_OutputArray*> cv_VectorOfSize_output_array(std::vector<cv::Size>* instance) {
		try {
			return Ok(new cv::_OutputArray(*instance));
		} OCVRS_CATCH(Result<cv::_OutputArray*>)
	}
	
	Result<cv::_InputOutputArray*> cv_VectorOfSize_input_output_array(std::vector<cv::Size>* instance) {
		try {
			return Ok(new cv::_InputOutputArray(*instance));
		} OCVRS_CATCH(Result<cv::_InputOutputArray*>)
	}
	
}


