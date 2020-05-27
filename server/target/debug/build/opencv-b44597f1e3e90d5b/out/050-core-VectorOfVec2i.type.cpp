extern "C" {
	void cv_VectorOfVec2i_delete(std::vector<cv::Vec2i>* instance) {
		delete instance;
	}

	std::vector<cv::Vec2i>* cv_VectorOfVec2i_new() {
		return new std::vector<cv::Vec2i>();
	}

	size_t cv_VectorOfVec2i_len(const std::vector<cv::Vec2i>* instance) {
		return instance->size();
	}

	bool cv_VectorOfVec2i_is_empty(const std::vector<cv::Vec2i>* instance) {
		return instance->empty();
	}

	size_t cv_VectorOfVec2i_capacity(const std::vector<cv::Vec2i>* instance) {
		return instance->capacity();
	}

	void cv_VectorOfVec2i_shrink_to_fit(std::vector<cv::Vec2i>* instance) {
		instance->shrink_to_fit();
	}

	void cv_VectorOfVec2i_reserve(std::vector<cv::Vec2i>* instance, size_t additional) {
		instance->reserve(instance->size() + additional);
	}

	void cv_VectorOfVec2i_remove(std::vector<cv::Vec2i>* instance, size_t index) {
		instance->erase(instance->begin() + index);
	}

	void cv_VectorOfVec2i_swap(std::vector<cv::Vec2i>* instance, size_t index1, size_t index2) {
		std::swap((*instance)[index1], (*instance)[index2]);
	}

	void cv_VectorOfVec2i_clear(std::vector<cv::Vec2i>* instance) {
		instance->clear();
	}

	void cv_VectorOfVec2i_push(std::vector<cv::Vec2i>* instance, const cv::Vec2i* val) {
		instance->push_back(*val);
	}

	void cv_VectorOfVec2i_insert(std::vector<cv::Vec2i>* instance, size_t index, const cv::Vec2i* val) {
		instance->insert(instance->begin() + index, *val);
	}

	Result<cv::Vec2i> cv_VectorOfVec2i_get(const std::vector<cv::Vec2i>* instance, size_t index) {
		return Ok<cv::Vec2i>((*instance)[index]);
	}

	void cv_VectorOfVec2i_set(std::vector<cv::Vec2i>* instance, size_t index, const cv::Vec2i* val) {
		(*instance)[index] = *val;
	}

	const cv::Vec2i* cv_VectorOfVec2i_data(std::vector<cv::Vec2i>* instance) {
		return instance->data();
	}
	
	Result<cv::_InputArray*> cv_VectorOfVec2i_input_array(std::vector<cv::Vec2i>* instance) {
		try {
			return Ok(new cv::_InputArray(*instance));
		} OCVRS_CATCH(Result<cv::_InputArray*>)
	}
	
	Result<cv::_OutputArray*> cv_VectorOfVec2i_output_array(std::vector<cv::Vec2i>* instance) {
		try {
			return Ok(new cv::_OutputArray(*instance));
		} OCVRS_CATCH(Result<cv::_OutputArray*>)
	}
	
	Result<cv::_InputOutputArray*> cv_VectorOfVec2i_input_output_array(std::vector<cv::Vec2i>* instance) {
		try {
			return Ok(new cv::_InputOutputArray(*instance));
		} OCVRS_CATCH(Result<cv::_InputOutputArray*>)
	}
	
}


