extern "C" {
	void cv_VectorOfScalar_delete(std::vector<cv::Scalar>* instance) {
		delete instance;
	}

	std::vector<cv::Scalar>* cv_VectorOfScalar_new() {
		return new std::vector<cv::Scalar>();
	}

	size_t cv_VectorOfScalar_len(const std::vector<cv::Scalar>* instance) {
		return instance->size();
	}

	bool cv_VectorOfScalar_is_empty(const std::vector<cv::Scalar>* instance) {
		return instance->empty();
	}

	size_t cv_VectorOfScalar_capacity(const std::vector<cv::Scalar>* instance) {
		return instance->capacity();
	}

	void cv_VectorOfScalar_shrink_to_fit(std::vector<cv::Scalar>* instance) {
		instance->shrink_to_fit();
	}

	void cv_VectorOfScalar_reserve(std::vector<cv::Scalar>* instance, size_t additional) {
		instance->reserve(instance->size() + additional);
	}

	void cv_VectorOfScalar_remove(std::vector<cv::Scalar>* instance, size_t index) {
		instance->erase(instance->begin() + index);
	}

	void cv_VectorOfScalar_swap(std::vector<cv::Scalar>* instance, size_t index1, size_t index2) {
		std::swap((*instance)[index1], (*instance)[index2]);
	}

	void cv_VectorOfScalar_clear(std::vector<cv::Scalar>* instance) {
		instance->clear();
	}

	void cv_VectorOfScalar_push(std::vector<cv::Scalar>* instance, const cv::Scalar* val) {
		instance->push_back(*val);
	}

	void cv_VectorOfScalar_insert(std::vector<cv::Scalar>* instance, size_t index, const cv::Scalar* val) {
		instance->insert(instance->begin() + index, *val);
	}

	Result<cv::Scalar> cv_VectorOfScalar_get(const std::vector<cv::Scalar>* instance, size_t index) {
		return Ok<cv::Scalar>((*instance)[index]);
	}

	void cv_VectorOfScalar_set(std::vector<cv::Scalar>* instance, size_t index, const cv::Scalar* val) {
		(*instance)[index] = *val;
	}

	const cv::Scalar* cv_VectorOfScalar_data(std::vector<cv::Scalar>* instance) {
		return instance->data();
	}
	
	Result<cv::_InputArray*> cv_VectorOfScalar_input_array(std::vector<cv::Scalar>* instance) {
		try {
			return Ok(new cv::_InputArray(*instance));
		} OCVRS_CATCH(Result<cv::_InputArray*>)
	}
	
	Result<cv::_OutputArray*> cv_VectorOfScalar_output_array(std::vector<cv::Scalar>* instance) {
		try {
			return Ok(new cv::_OutputArray(*instance));
		} OCVRS_CATCH(Result<cv::_OutputArray*>)
	}
	
	Result<cv::_InputOutputArray*> cv_VectorOfScalar_input_output_array(std::vector<cv::Scalar>* instance) {
		try {
			return Ok(new cv::_InputOutputArray(*instance));
		} OCVRS_CATCH(Result<cv::_InputOutputArray*>)
	}
	
}


