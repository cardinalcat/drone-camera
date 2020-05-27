extern "C" {
	void cv_VectorOfu8_delete(std::vector<unsigned char>* instance) {
		delete instance;
	}

	std::vector<unsigned char>* cv_VectorOfu8_new() {
		return new std::vector<unsigned char>();
	}

	size_t cv_VectorOfu8_len(const std::vector<unsigned char>* instance) {
		return instance->size();
	}

	bool cv_VectorOfu8_is_empty(const std::vector<unsigned char>* instance) {
		return instance->empty();
	}

	size_t cv_VectorOfu8_capacity(const std::vector<unsigned char>* instance) {
		return instance->capacity();
	}

	void cv_VectorOfu8_shrink_to_fit(std::vector<unsigned char>* instance) {
		instance->shrink_to_fit();
	}

	void cv_VectorOfu8_reserve(std::vector<unsigned char>* instance, size_t additional) {
		instance->reserve(instance->size() + additional);
	}

	void cv_VectorOfu8_remove(std::vector<unsigned char>* instance, size_t index) {
		instance->erase(instance->begin() + index);
	}

	void cv_VectorOfu8_swap(std::vector<unsigned char>* instance, size_t index1, size_t index2) {
		std::swap((*instance)[index1], (*instance)[index2]);
	}

	void cv_VectorOfu8_clear(std::vector<unsigned char>* instance) {
		instance->clear();
	}

	void cv_VectorOfu8_push(std::vector<unsigned char>* instance, unsigned char val) {
		instance->push_back(val);
	}

	void cv_VectorOfu8_insert(std::vector<unsigned char>* instance, size_t index, unsigned char val) {
		instance->insert(instance->begin() + index, val);
	}

	Result<unsigned char> cv_VectorOfu8_get(const std::vector<unsigned char>* instance, size_t index) {
		return Ok<unsigned char>((*instance)[index]);
	}

	void cv_VectorOfu8_set(std::vector<unsigned char>* instance, size_t index, unsigned char val) {
		(*instance)[index] = val;
	}

	const unsigned char* cv_VectorOfu8_data(std::vector<unsigned char>* instance) {
		return instance->data();
	}
	
	Result<cv::_InputArray*> cv_VectorOfu8_input_array(std::vector<unsigned char>* instance) {
		try {
			return Ok(new cv::_InputArray(*instance));
		} OCVRS_CATCH(Result<cv::_InputArray*>)
	}
	
	Result<cv::_OutputArray*> cv_VectorOfu8_output_array(std::vector<unsigned char>* instance) {
		try {
			return Ok(new cv::_OutputArray(*instance));
		} OCVRS_CATCH(Result<cv::_OutputArray*>)
	}
	
	Result<cv::_InputOutputArray*> cv_VectorOfu8_input_output_array(std::vector<unsigned char>* instance) {
		try {
			return Ok(new cv::_InputOutputArray(*instance));
		} OCVRS_CATCH(Result<cv::_InputOutputArray*>)
	}
	
}


