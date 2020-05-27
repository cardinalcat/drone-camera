extern "C" {
	void cv_VectorOfMatShape_delete(std::vector<cv::dnn::MatShape>* instance) {
		delete instance;
	}

	std::vector<cv::dnn::MatShape>* cv_VectorOfMatShape_new() {
		return new std::vector<cv::dnn::MatShape>();
	}

	size_t cv_VectorOfMatShape_len(const std::vector<cv::dnn::MatShape>* instance) {
		return instance->size();
	}

	bool cv_VectorOfMatShape_is_empty(const std::vector<cv::dnn::MatShape>* instance) {
		return instance->empty();
	}

	size_t cv_VectorOfMatShape_capacity(const std::vector<cv::dnn::MatShape>* instance) {
		return instance->capacity();
	}

	void cv_VectorOfMatShape_shrink_to_fit(std::vector<cv::dnn::MatShape>* instance) {
		instance->shrink_to_fit();
	}

	void cv_VectorOfMatShape_reserve(std::vector<cv::dnn::MatShape>* instance, size_t additional) {
		instance->reserve(instance->size() + additional);
	}

	void cv_VectorOfMatShape_remove(std::vector<cv::dnn::MatShape>* instance, size_t index) {
		instance->erase(instance->begin() + index);
	}

	void cv_VectorOfMatShape_swap(std::vector<cv::dnn::MatShape>* instance, size_t index1, size_t index2) {
		std::swap((*instance)[index1], (*instance)[index2]);
	}

	void cv_VectorOfMatShape_clear(std::vector<cv::dnn::MatShape>* instance) {
		instance->clear();
	}

	void cv_VectorOfMatShape_push(std::vector<cv::dnn::MatShape>* instance, cv::dnn::MatShape* val) {
		instance->push_back(*val);
	}

	void cv_VectorOfMatShape_insert(std::vector<cv::dnn::MatShape>* instance, size_t index, cv::dnn::MatShape* val) {
		instance->insert(instance->begin() + index, *val);
	}

	Result<cv::dnn::MatShape*> cv_VectorOfMatShape_get(const std::vector<cv::dnn::MatShape>* instance, size_t index) {
		return Ok<cv::dnn::MatShape*>(new cv::dnn::MatShape((*instance)[index]));
	}

	void cv_VectorOfMatShape_set(std::vector<cv::dnn::MatShape>* instance, size_t index, cv::dnn::MatShape* val) {
		(*instance)[index] = *val;
	}

	Result<cv::_InputArray*> cv_VectorOfMatShape_input_array(std::vector<cv::dnn::MatShape>* instance) {
		try {
			return Ok(new cv::_InputArray(*instance));
		} OCVRS_CATCH(Result<cv::_InputArray*>)
	}
	
	Result<cv::_OutputArray*> cv_VectorOfMatShape_output_array(std::vector<cv::dnn::MatShape>* instance) {
		try {
			return Ok(new cv::_OutputArray(*instance));
		} OCVRS_CATCH(Result<cv::_OutputArray*>)
	}
	
	Result<cv::_InputOutputArray*> cv_VectorOfMatShape_input_output_array(std::vector<cv::dnn::MatShape>* instance) {
		try {
			return Ok(new cv::_InputOutputArray(*instance));
		} OCVRS_CATCH(Result<cv::_InputOutputArray*>)
	}
	
}


