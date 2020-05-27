extern "C" {
	void cv_VectorOfi32_delete(std::vector<int>* instance) {
		delete instance;
	}

	std::vector<int>* cv_VectorOfi32_new() {
		return new std::vector<int>();
	}

	size_t cv_VectorOfi32_len(const std::vector<int>* instance) {
		return instance->size();
	}

	bool cv_VectorOfi32_is_empty(const std::vector<int>* instance) {
		return instance->empty();
	}

	size_t cv_VectorOfi32_capacity(const std::vector<int>* instance) {
		return instance->capacity();
	}

	void cv_VectorOfi32_shrink_to_fit(std::vector<int>* instance) {
		instance->shrink_to_fit();
	}

	void cv_VectorOfi32_reserve(std::vector<int>* instance, size_t additional) {
		instance->reserve(instance->size() + additional);
	}

	void cv_VectorOfi32_remove(std::vector<int>* instance, size_t index) {
		instance->erase(instance->begin() + index);
	}

	void cv_VectorOfi32_swap(std::vector<int>* instance, size_t index1, size_t index2) {
		std::swap((*instance)[index1], (*instance)[index2]);
	}

	void cv_VectorOfi32_clear(std::vector<int>* instance) {
		instance->clear();
	}

	void cv_VectorOfi32_push(std::vector<int>* instance, int val) {
		instance->push_back(val);
	}

	void cv_VectorOfi32_insert(std::vector<int>* instance, size_t index, int val) {
		instance->insert(instance->begin() + index, val);
	}

	Result<int> cv_VectorOfi32_get(const std::vector<int>* instance, size_t index) {
		return Ok<int>((*instance)[index]);
	}

	void cv_VectorOfi32_set(std::vector<int>* instance, size_t index, int val) {
		(*instance)[index] = val;
	}

	const int* cv_VectorOfi32_data(std::vector<int>* instance) {
		return instance->data();
	}
	
	Result<cv::_InputArray*> cv_VectorOfi32_input_array(std::vector<int>* instance) {
		try {
			return Ok(new cv::_InputArray(*instance));
		} OCVRS_CATCH(Result<cv::_InputArray*>)
	}
	
	Result<cv::_OutputArray*> cv_VectorOfi32_output_array(std::vector<int>* instance) {
		try {
			return Ok(new cv::_OutputArray(*instance));
		} OCVRS_CATCH(Result<cv::_OutputArray*>)
	}
	
	Result<cv::_InputOutputArray*> cv_VectorOfi32_input_output_array(std::vector<int>* instance) {
		try {
			return Ok(new cv::_InputOutputArray(*instance));
		} OCVRS_CATCH(Result<cv::_InputOutputArray*>)
	}
	
}


