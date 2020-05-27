extern "C" {
	void cv_VectorOfVectorOfu8_delete(std::vector<std::vector<unsigned char>>* instance) {
		delete instance;
	}

	std::vector<std::vector<unsigned char>>* cv_VectorOfVectorOfu8_new() {
		return new std::vector<std::vector<unsigned char>>();
	}

	size_t cv_VectorOfVectorOfu8_len(const std::vector<std::vector<unsigned char>>* instance) {
		return instance->size();
	}

	bool cv_VectorOfVectorOfu8_is_empty(const std::vector<std::vector<unsigned char>>* instance) {
		return instance->empty();
	}

	size_t cv_VectorOfVectorOfu8_capacity(const std::vector<std::vector<unsigned char>>* instance) {
		return instance->capacity();
	}

	void cv_VectorOfVectorOfu8_shrink_to_fit(std::vector<std::vector<unsigned char>>* instance) {
		instance->shrink_to_fit();
	}

	void cv_VectorOfVectorOfu8_reserve(std::vector<std::vector<unsigned char>>* instance, size_t additional) {
		instance->reserve(instance->size() + additional);
	}

	void cv_VectorOfVectorOfu8_remove(std::vector<std::vector<unsigned char>>* instance, size_t index) {
		instance->erase(instance->begin() + index);
	}

	void cv_VectorOfVectorOfu8_swap(std::vector<std::vector<unsigned char>>* instance, size_t index1, size_t index2) {
		std::swap((*instance)[index1], (*instance)[index2]);
	}

	void cv_VectorOfVectorOfu8_clear(std::vector<std::vector<unsigned char>>* instance) {
		instance->clear();
	}

	void cv_VectorOfVectorOfu8_push(std::vector<std::vector<unsigned char>>* instance, std::vector<unsigned char>* val) {
		instance->push_back(*val);
	}

	void cv_VectorOfVectorOfu8_insert(std::vector<std::vector<unsigned char>>* instance, size_t index, std::vector<unsigned char>* val) {
		instance->insert(instance->begin() + index, *val);
	}

	Result<std::vector<unsigned char>*> cv_VectorOfVectorOfu8_get(const std::vector<std::vector<unsigned char>>* instance, size_t index) {
		return Ok<std::vector<unsigned char>*>(new std::vector<unsigned char>((*instance)[index]));
	}

	void cv_VectorOfVectorOfu8_set(std::vector<std::vector<unsigned char>>* instance, size_t index, std::vector<unsigned char>* val) {
		(*instance)[index] = *val;
	}

	Result<cv::_InputArray*> cv_VectorOfVectorOfu8_input_array(std::vector<std::vector<unsigned char>>* instance) {
		try {
			return Ok(new cv::_InputArray(*instance));
		} OCVRS_CATCH(Result<cv::_InputArray*>)
	}
	
	Result<cv::_OutputArray*> cv_VectorOfVectorOfu8_output_array(std::vector<std::vector<unsigned char>>* instance) {
		try {
			return Ok(new cv::_OutputArray(*instance));
		} OCVRS_CATCH(Result<cv::_OutputArray*>)
	}
	
	Result<cv::_InputOutputArray*> cv_VectorOfVectorOfu8_input_output_array(std::vector<std::vector<unsigned char>>* instance) {
		try {
			return Ok(new cv::_InputOutputArray(*instance));
		} OCVRS_CATCH(Result<cv::_InputOutputArray*>)
	}
	
}


