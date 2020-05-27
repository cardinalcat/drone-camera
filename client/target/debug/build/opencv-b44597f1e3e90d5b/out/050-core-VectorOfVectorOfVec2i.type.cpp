extern "C" {
	void cv_VectorOfVectorOfVec2i_delete(std::vector<std::vector<cv::Vec2i>>* instance) {
		delete instance;
	}

	std::vector<std::vector<cv::Vec2i>>* cv_VectorOfVectorOfVec2i_new() {
		return new std::vector<std::vector<cv::Vec2i>>();
	}

	size_t cv_VectorOfVectorOfVec2i_len(const std::vector<std::vector<cv::Vec2i>>* instance) {
		return instance->size();
	}

	bool cv_VectorOfVectorOfVec2i_is_empty(const std::vector<std::vector<cv::Vec2i>>* instance) {
		return instance->empty();
	}

	size_t cv_VectorOfVectorOfVec2i_capacity(const std::vector<std::vector<cv::Vec2i>>* instance) {
		return instance->capacity();
	}

	void cv_VectorOfVectorOfVec2i_shrink_to_fit(std::vector<std::vector<cv::Vec2i>>* instance) {
		instance->shrink_to_fit();
	}

	void cv_VectorOfVectorOfVec2i_reserve(std::vector<std::vector<cv::Vec2i>>* instance, size_t additional) {
		instance->reserve(instance->size() + additional);
	}

	void cv_VectorOfVectorOfVec2i_remove(std::vector<std::vector<cv::Vec2i>>* instance, size_t index) {
		instance->erase(instance->begin() + index);
	}

	void cv_VectorOfVectorOfVec2i_swap(std::vector<std::vector<cv::Vec2i>>* instance, size_t index1, size_t index2) {
		std::swap((*instance)[index1], (*instance)[index2]);
	}

	void cv_VectorOfVectorOfVec2i_clear(std::vector<std::vector<cv::Vec2i>>* instance) {
		instance->clear();
	}

	void cv_VectorOfVectorOfVec2i_push(std::vector<std::vector<cv::Vec2i>>* instance, std::vector<cv::Vec2i>* val) {
		instance->push_back(*val);
	}

	void cv_VectorOfVectorOfVec2i_insert(std::vector<std::vector<cv::Vec2i>>* instance, size_t index, std::vector<cv::Vec2i>* val) {
		instance->insert(instance->begin() + index, *val);
	}

	Result<std::vector<cv::Vec2i>*> cv_VectorOfVectorOfVec2i_get(const std::vector<std::vector<cv::Vec2i>>* instance, size_t index) {
		return Ok<std::vector<cv::Vec2i>*>(new std::vector<cv::Vec2i>((*instance)[index]));
	}

	void cv_VectorOfVectorOfVec2i_set(std::vector<std::vector<cv::Vec2i>>* instance, size_t index, std::vector<cv::Vec2i>* val) {
		(*instance)[index] = *val;
	}

	Result<cv::_InputArray*> cv_VectorOfVectorOfVec2i_input_array(std::vector<std::vector<cv::Vec2i>>* instance) {
		try {
			return Ok(new cv::_InputArray(*instance));
		} OCVRS_CATCH(Result<cv::_InputArray*>)
	}
	
	Result<cv::_OutputArray*> cv_VectorOfVectorOfVec2i_output_array(std::vector<std::vector<cv::Vec2i>>* instance) {
		try {
			return Ok(new cv::_OutputArray(*instance));
		} OCVRS_CATCH(Result<cv::_OutputArray*>)
	}
	
	Result<cv::_InputOutputArray*> cv_VectorOfVectorOfVec2i_input_output_array(std::vector<std::vector<cv::Vec2i>>* instance) {
		try {
			return Ok(new cv::_InputOutputArray(*instance));
		} OCVRS_CATCH(Result<cv::_InputOutputArray*>)
	}
	
}


