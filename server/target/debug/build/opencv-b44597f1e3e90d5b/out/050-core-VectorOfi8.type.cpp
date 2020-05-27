extern "C" {
	void cv_VectorOfi8_delete(std::vector<char>* instance) {
		delete instance;
	}

	std::vector<char>* cv_VectorOfi8_new() {
		return new std::vector<char>();
	}

	size_t cv_VectorOfi8_len(const std::vector<char>* instance) {
		return instance->size();
	}

	bool cv_VectorOfi8_is_empty(const std::vector<char>* instance) {
		return instance->empty();
	}

	size_t cv_VectorOfi8_capacity(const std::vector<char>* instance) {
		return instance->capacity();
	}

	void cv_VectorOfi8_shrink_to_fit(std::vector<char>* instance) {
		instance->shrink_to_fit();
	}

	void cv_VectorOfi8_reserve(std::vector<char>* instance, size_t additional) {
		instance->reserve(instance->size() + additional);
	}

	void cv_VectorOfi8_remove(std::vector<char>* instance, size_t index) {
		instance->erase(instance->begin() + index);
	}

	void cv_VectorOfi8_swap(std::vector<char>* instance, size_t index1, size_t index2) {
		std::swap((*instance)[index1], (*instance)[index2]);
	}

	void cv_VectorOfi8_clear(std::vector<char>* instance) {
		instance->clear();
	}

	void cv_VectorOfi8_push(std::vector<char>* instance, char val) {
		instance->push_back(val);
	}

	void cv_VectorOfi8_insert(std::vector<char>* instance, size_t index, char val) {
		instance->insert(instance->begin() + index, val);
	}

	Result<char> cv_VectorOfi8_get(const std::vector<char>* instance, size_t index) {
		return Ok<char>((*instance)[index]);
	}

	void cv_VectorOfi8_set(std::vector<char>* instance, size_t index, char val) {
		(*instance)[index] = val;
	}

	const char* cv_VectorOfi8_data(std::vector<char>* instance) {
		return instance->data();
	}
	
	Result<cv::_InputArray*> cv_VectorOfi8_input_array(std::vector<char>* instance) {
		try {
			return Ok(new cv::_InputArray(*instance));
		} OCVRS_CATCH(Result<cv::_InputArray*>)
	}
	
	Result<cv::_OutputArray*> cv_VectorOfi8_output_array(std::vector<char>* instance) {
		try {
			return Ok(new cv::_OutputArray(*instance));
		} OCVRS_CATCH(Result<cv::_OutputArray*>)
	}
	
	Result<cv::_InputOutputArray*> cv_VectorOfi8_input_output_array(std::vector<char>* instance) {
		try {
			return Ok(new cv::_InputOutputArray(*instance));
		} OCVRS_CATCH(Result<cv::_InputOutputArray*>)
	}
	
}


