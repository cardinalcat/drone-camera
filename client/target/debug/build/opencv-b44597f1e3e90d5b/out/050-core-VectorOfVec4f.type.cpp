extern "C" {
	void cv_VectorOfVec4f_delete(std::vector<cv::Vec4f>* instance) {
		delete instance;
	}

	std::vector<cv::Vec4f>* cv_VectorOfVec4f_new() {
		return new std::vector<cv::Vec4f>();
	}

	size_t cv_VectorOfVec4f_len(const std::vector<cv::Vec4f>* instance) {
		return instance->size();
	}

	bool cv_VectorOfVec4f_is_empty(const std::vector<cv::Vec4f>* instance) {
		return instance->empty();
	}

	size_t cv_VectorOfVec4f_capacity(const std::vector<cv::Vec4f>* instance) {
		return instance->capacity();
	}

	void cv_VectorOfVec4f_shrink_to_fit(std::vector<cv::Vec4f>* instance) {
		instance->shrink_to_fit();
	}

	void cv_VectorOfVec4f_reserve(std::vector<cv::Vec4f>* instance, size_t additional) {
		instance->reserve(instance->size() + additional);
	}

	void cv_VectorOfVec4f_remove(std::vector<cv::Vec4f>* instance, size_t index) {
		instance->erase(instance->begin() + index);
	}

	void cv_VectorOfVec4f_swap(std::vector<cv::Vec4f>* instance, size_t index1, size_t index2) {
		std::swap((*instance)[index1], (*instance)[index2]);
	}

	void cv_VectorOfVec4f_clear(std::vector<cv::Vec4f>* instance) {
		instance->clear();
	}

	void cv_VectorOfVec4f_push(std::vector<cv::Vec4f>* instance, const cv::Vec4f* val) {
		instance->push_back(*val);
	}

	void cv_VectorOfVec4f_insert(std::vector<cv::Vec4f>* instance, size_t index, const cv::Vec4f* val) {
		instance->insert(instance->begin() + index, *val);
	}

	Result<cv::Vec4f> cv_VectorOfVec4f_get(const std::vector<cv::Vec4f>* instance, size_t index) {
		return Ok<cv::Vec4f>((*instance)[index]);
	}

	void cv_VectorOfVec4f_set(std::vector<cv::Vec4f>* instance, size_t index, const cv::Vec4f* val) {
		(*instance)[index] = *val;
	}

	const cv::Vec4f* cv_VectorOfVec4f_data(std::vector<cv::Vec4f>* instance) {
		return instance->data();
	}
	
	Result<cv::_InputArray*> cv_VectorOfVec4f_input_array(std::vector<cv::Vec4f>* instance) {
		try {
			return Ok(new cv::_InputArray(*instance));
		} OCVRS_CATCH(Result<cv::_InputArray*>)
	}
	
	Result<cv::_OutputArray*> cv_VectorOfVec4f_output_array(std::vector<cv::Vec4f>* instance) {
		try {
			return Ok(new cv::_OutputArray(*instance));
		} OCVRS_CATCH(Result<cv::_OutputArray*>)
	}
	
	Result<cv::_InputOutputArray*> cv_VectorOfVec4f_input_output_array(std::vector<cv::Vec4f>* instance) {
		try {
			return Ok(new cv::_InputOutputArray(*instance));
		} OCVRS_CATCH(Result<cv::_InputOutputArray*>)
	}
	
}


