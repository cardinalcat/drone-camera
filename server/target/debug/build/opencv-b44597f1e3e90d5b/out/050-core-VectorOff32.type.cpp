extern "C" {
	void cv_VectorOff32_delete(std::vector<float>* instance) {
		delete instance;
	}

	std::vector<float>* cv_VectorOff32_new() {
		return new std::vector<float>();
	}

	size_t cv_VectorOff32_len(const std::vector<float>* instance) {
		return instance->size();
	}

	bool cv_VectorOff32_is_empty(const std::vector<float>* instance) {
		return instance->empty();
	}

	size_t cv_VectorOff32_capacity(const std::vector<float>* instance) {
		return instance->capacity();
	}

	void cv_VectorOff32_shrink_to_fit(std::vector<float>* instance) {
		instance->shrink_to_fit();
	}

	void cv_VectorOff32_reserve(std::vector<float>* instance, size_t additional) {
		instance->reserve(instance->size() + additional);
	}

	void cv_VectorOff32_remove(std::vector<float>* instance, size_t index) {
		instance->erase(instance->begin() + index);
	}

	void cv_VectorOff32_swap(std::vector<float>* instance, size_t index1, size_t index2) {
		std::swap((*instance)[index1], (*instance)[index2]);
	}

	void cv_VectorOff32_clear(std::vector<float>* instance) {
		instance->clear();
	}

	void cv_VectorOff32_push(std::vector<float>* instance, float val) {
		instance->push_back(val);
	}

	void cv_VectorOff32_insert(std::vector<float>* instance, size_t index, float val) {
		instance->insert(instance->begin() + index, val);
	}

	Result<float> cv_VectorOff32_get(const std::vector<float>* instance, size_t index) {
		return Ok<float>((*instance)[index]);
	}

	void cv_VectorOff32_set(std::vector<float>* instance, size_t index, float val) {
		(*instance)[index] = val;
	}

	const float* cv_VectorOff32_data(std::vector<float>* instance) {
		return instance->data();
	}
	
	Result<cv::_InputArray*> cv_VectorOff32_input_array(std::vector<float>* instance) {
		try {
			return Ok(new cv::_InputArray(*instance));
		} OCVRS_CATCH(Result<cv::_InputArray*>)
	}
	
	Result<cv::_OutputArray*> cv_VectorOff32_output_array(std::vector<float>* instance) {
		try {
			return Ok(new cv::_OutputArray(*instance));
		} OCVRS_CATCH(Result<cv::_OutputArray*>)
	}
	
	Result<cv::_InputOutputArray*> cv_VectorOff32_input_output_array(std::vector<float>* instance) {
		try {
			return Ok(new cv::_InputOutputArray(*instance));
		} OCVRS_CATCH(Result<cv::_InputOutputArray*>)
	}
	
}


