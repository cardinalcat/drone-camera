extern "C" {
	void cv_VectorOfPoint3i_delete(std::vector<cv::Point3i>* instance) {
		delete instance;
	}

	std::vector<cv::Point3i>* cv_VectorOfPoint3i_new() {
		return new std::vector<cv::Point3i>();
	}

	size_t cv_VectorOfPoint3i_len(const std::vector<cv::Point3i>* instance) {
		return instance->size();
	}

	bool cv_VectorOfPoint3i_is_empty(const std::vector<cv::Point3i>* instance) {
		return instance->empty();
	}

	size_t cv_VectorOfPoint3i_capacity(const std::vector<cv::Point3i>* instance) {
		return instance->capacity();
	}

	void cv_VectorOfPoint3i_shrink_to_fit(std::vector<cv::Point3i>* instance) {
		instance->shrink_to_fit();
	}

	void cv_VectorOfPoint3i_reserve(std::vector<cv::Point3i>* instance, size_t additional) {
		instance->reserve(instance->size() + additional);
	}

	void cv_VectorOfPoint3i_remove(std::vector<cv::Point3i>* instance, size_t index) {
		instance->erase(instance->begin() + index);
	}

	void cv_VectorOfPoint3i_swap(std::vector<cv::Point3i>* instance, size_t index1, size_t index2) {
		std::swap((*instance)[index1], (*instance)[index2]);
	}

	void cv_VectorOfPoint3i_clear(std::vector<cv::Point3i>* instance) {
		instance->clear();
	}

	void cv_VectorOfPoint3i_push(std::vector<cv::Point3i>* instance, const cv::Point3i* val) {
		instance->push_back(*val);
	}

	void cv_VectorOfPoint3i_insert(std::vector<cv::Point3i>* instance, size_t index, const cv::Point3i* val) {
		instance->insert(instance->begin() + index, *val);
	}

	Result<cv::Point3i> cv_VectorOfPoint3i_get(const std::vector<cv::Point3i>* instance, size_t index) {
		return Ok<cv::Point3i>((*instance)[index]);
	}

	void cv_VectorOfPoint3i_set(std::vector<cv::Point3i>* instance, size_t index, const cv::Point3i* val) {
		(*instance)[index] = *val;
	}

	const cv::Point3i* cv_VectorOfPoint3i_data(std::vector<cv::Point3i>* instance) {
		return instance->data();
	}
	
	Result<cv::_InputArray*> cv_VectorOfPoint3i_input_array(std::vector<cv::Point3i>* instance) {
		try {
			return Ok(new cv::_InputArray(*instance));
		} OCVRS_CATCH(Result<cv::_InputArray*>)
	}
	
	Result<cv::_OutputArray*> cv_VectorOfPoint3i_output_array(std::vector<cv::Point3i>* instance) {
		try {
			return Ok(new cv::_OutputArray(*instance));
		} OCVRS_CATCH(Result<cv::_OutputArray*>)
	}
	
	Result<cv::_InputOutputArray*> cv_VectorOfPoint3i_input_output_array(std::vector<cv::Point3i>* instance) {
		try {
			return Ok(new cv::_InputOutputArray(*instance));
		} OCVRS_CATCH(Result<cv::_InputOutputArray*>)
	}
	
}


