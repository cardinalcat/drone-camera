extern "C" {
	void cv_VectorOfVectorOfPoint_delete(std::vector<std::vector<cv::Point>>* instance) {
		delete instance;
	}

	std::vector<std::vector<cv::Point>>* cv_VectorOfVectorOfPoint_new() {
		return new std::vector<std::vector<cv::Point>>();
	}

	size_t cv_VectorOfVectorOfPoint_len(const std::vector<std::vector<cv::Point>>* instance) {
		return instance->size();
	}

	bool cv_VectorOfVectorOfPoint_is_empty(const std::vector<std::vector<cv::Point>>* instance) {
		return instance->empty();
	}

	size_t cv_VectorOfVectorOfPoint_capacity(const std::vector<std::vector<cv::Point>>* instance) {
		return instance->capacity();
	}

	void cv_VectorOfVectorOfPoint_shrink_to_fit(std::vector<std::vector<cv::Point>>* instance) {
		instance->shrink_to_fit();
	}

	void cv_VectorOfVectorOfPoint_reserve(std::vector<std::vector<cv::Point>>* instance, size_t additional) {
		instance->reserve(instance->size() + additional);
	}

	void cv_VectorOfVectorOfPoint_remove(std::vector<std::vector<cv::Point>>* instance, size_t index) {
		instance->erase(instance->begin() + index);
	}

	void cv_VectorOfVectorOfPoint_swap(std::vector<std::vector<cv::Point>>* instance, size_t index1, size_t index2) {
		std::swap((*instance)[index1], (*instance)[index2]);
	}

	void cv_VectorOfVectorOfPoint_clear(std::vector<std::vector<cv::Point>>* instance) {
		instance->clear();
	}

	void cv_VectorOfVectorOfPoint_push(std::vector<std::vector<cv::Point>>* instance, std::vector<cv::Point>* val) {
		instance->push_back(*val);
	}

	void cv_VectorOfVectorOfPoint_insert(std::vector<std::vector<cv::Point>>* instance, size_t index, std::vector<cv::Point>* val) {
		instance->insert(instance->begin() + index, *val);
	}

	Result<std::vector<cv::Point>*> cv_VectorOfVectorOfPoint_get(const std::vector<std::vector<cv::Point>>* instance, size_t index) {
		return Ok<std::vector<cv::Point>*>(new std::vector<cv::Point>((*instance)[index]));
	}

	void cv_VectorOfVectorOfPoint_set(std::vector<std::vector<cv::Point>>* instance, size_t index, std::vector<cv::Point>* val) {
		(*instance)[index] = *val;
	}

	Result<cv::_InputArray*> cv_VectorOfVectorOfPoint_input_array(std::vector<std::vector<cv::Point>>* instance) {
		try {
			return Ok(new cv::_InputArray(*instance));
		} OCVRS_CATCH(Result<cv::_InputArray*>)
	}
	
	Result<cv::_OutputArray*> cv_VectorOfVectorOfPoint_output_array(std::vector<std::vector<cv::Point>>* instance) {
		try {
			return Ok(new cv::_OutputArray(*instance));
		} OCVRS_CATCH(Result<cv::_OutputArray*>)
	}
	
	Result<cv::_InputOutputArray*> cv_VectorOfVectorOfPoint_input_output_array(std::vector<std::vector<cv::Point>>* instance) {
		try {
			return Ok(new cv::_InputOutputArray(*instance));
		} OCVRS_CATCH(Result<cv::_InputOutputArray*>)
	}
	
}


