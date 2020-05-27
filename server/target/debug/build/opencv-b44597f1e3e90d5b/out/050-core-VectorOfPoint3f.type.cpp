extern "C" {
	void cv_VectorOfPoint3f_delete(std::vector<cv::Point3f>* instance) {
		delete instance;
	}

	std::vector<cv::Point3f>* cv_VectorOfPoint3f_new() {
		return new std::vector<cv::Point3f>();
	}

	size_t cv_VectorOfPoint3f_len(const std::vector<cv::Point3f>* instance) {
		return instance->size();
	}

	bool cv_VectorOfPoint3f_is_empty(const std::vector<cv::Point3f>* instance) {
		return instance->empty();
	}

	size_t cv_VectorOfPoint3f_capacity(const std::vector<cv::Point3f>* instance) {
		return instance->capacity();
	}

	void cv_VectorOfPoint3f_shrink_to_fit(std::vector<cv::Point3f>* instance) {
		instance->shrink_to_fit();
	}

	void cv_VectorOfPoint3f_reserve(std::vector<cv::Point3f>* instance, size_t additional) {
		instance->reserve(instance->size() + additional);
	}

	void cv_VectorOfPoint3f_remove(std::vector<cv::Point3f>* instance, size_t index) {
		instance->erase(instance->begin() + index);
	}

	void cv_VectorOfPoint3f_swap(std::vector<cv::Point3f>* instance, size_t index1, size_t index2) {
		std::swap((*instance)[index1], (*instance)[index2]);
	}

	void cv_VectorOfPoint3f_clear(std::vector<cv::Point3f>* instance) {
		instance->clear();
	}

	void cv_VectorOfPoint3f_push(std::vector<cv::Point3f>* instance, const cv::Point3f* val) {
		instance->push_back(*val);
	}

	void cv_VectorOfPoint3f_insert(std::vector<cv::Point3f>* instance, size_t index, const cv::Point3f* val) {
		instance->insert(instance->begin() + index, *val);
	}

	Result<cv::Point3f> cv_VectorOfPoint3f_get(const std::vector<cv::Point3f>* instance, size_t index) {
		return Ok<cv::Point3f>((*instance)[index]);
	}

	void cv_VectorOfPoint3f_set(std::vector<cv::Point3f>* instance, size_t index, const cv::Point3f* val) {
		(*instance)[index] = *val;
	}

	const cv::Point3f* cv_VectorOfPoint3f_data(std::vector<cv::Point3f>* instance) {
		return instance->data();
	}
	
	Result<cv::_InputArray*> cv_VectorOfPoint3f_input_array(std::vector<cv::Point3f>* instance) {
		try {
			return Ok(new cv::_InputArray(*instance));
		} OCVRS_CATCH(Result<cv::_InputArray*>)
	}
	
	Result<cv::_OutputArray*> cv_VectorOfPoint3f_output_array(std::vector<cv::Point3f>* instance) {
		try {
			return Ok(new cv::_OutputArray(*instance));
		} OCVRS_CATCH(Result<cv::_OutputArray*>)
	}
	
	Result<cv::_InputOutputArray*> cv_VectorOfPoint3f_input_output_array(std::vector<cv::Point3f>* instance) {
		try {
			return Ok(new cv::_InputOutputArray(*instance));
		} OCVRS_CATCH(Result<cv::_InputOutputArray*>)
	}
	
}


