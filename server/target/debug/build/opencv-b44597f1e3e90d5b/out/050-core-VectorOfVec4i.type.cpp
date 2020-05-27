extern "C" {
	void cv_VectorOfVec4i_delete(std::vector<cv::Vec4i>* instance) {
		delete instance;
	}

	std::vector<cv::Vec4i>* cv_VectorOfVec4i_new() {
		return new std::vector<cv::Vec4i>();
	}

	size_t cv_VectorOfVec4i_len(const std::vector<cv::Vec4i>* instance) {
		return instance->size();
	}

	bool cv_VectorOfVec4i_is_empty(const std::vector<cv::Vec4i>* instance) {
		return instance->empty();
	}

	size_t cv_VectorOfVec4i_capacity(const std::vector<cv::Vec4i>* instance) {
		return instance->capacity();
	}

	void cv_VectorOfVec4i_shrink_to_fit(std::vector<cv::Vec4i>* instance) {
		instance->shrink_to_fit();
	}

	void cv_VectorOfVec4i_reserve(std::vector<cv::Vec4i>* instance, size_t additional) {
		instance->reserve(instance->size() + additional);
	}

	void cv_VectorOfVec4i_remove(std::vector<cv::Vec4i>* instance, size_t index) {
		instance->erase(instance->begin() + index);
	}

	void cv_VectorOfVec4i_swap(std::vector<cv::Vec4i>* instance, size_t index1, size_t index2) {
		std::swap((*instance)[index1], (*instance)[index2]);
	}

	void cv_VectorOfVec4i_clear(std::vector<cv::Vec4i>* instance) {
		instance->clear();
	}

	void cv_VectorOfVec4i_push(std::vector<cv::Vec4i>* instance, const cv::Vec4i* val) {
		instance->push_back(*val);
	}

	void cv_VectorOfVec4i_insert(std::vector<cv::Vec4i>* instance, size_t index, const cv::Vec4i* val) {
		instance->insert(instance->begin() + index, *val);
	}

	Result<cv::Vec4i> cv_VectorOfVec4i_get(const std::vector<cv::Vec4i>* instance, size_t index) {
		return Ok<cv::Vec4i>((*instance)[index]);
	}

	void cv_VectorOfVec4i_set(std::vector<cv::Vec4i>* instance, size_t index, const cv::Vec4i* val) {
		(*instance)[index] = *val;
	}

	const cv::Vec4i* cv_VectorOfVec4i_data(std::vector<cv::Vec4i>* instance) {
		return instance->data();
	}
	
	Result<cv::_InputArray*> cv_VectorOfVec4i_input_array(std::vector<cv::Vec4i>* instance) {
		try {
			return Ok(new cv::_InputArray(*instance));
		} OCVRS_CATCH(Result<cv::_InputArray*>)
	}
	
	Result<cv::_OutputArray*> cv_VectorOfVec4i_output_array(std::vector<cv::Vec4i>* instance) {
		try {
			return Ok(new cv::_OutputArray(*instance));
		} OCVRS_CATCH(Result<cv::_OutputArray*>)
	}
	
	Result<cv::_InputOutputArray*> cv_VectorOfVec4i_input_output_array(std::vector<cv::Vec4i>* instance) {
		try {
			return Ok(new cv::_InputOutputArray(*instance));
		} OCVRS_CATCH(Result<cv::_InputOutputArray*>)
	}
	
}


