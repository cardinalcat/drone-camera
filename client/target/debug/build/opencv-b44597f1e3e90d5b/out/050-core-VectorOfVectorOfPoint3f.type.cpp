extern "C" {
	void cv_VectorOfVectorOfPoint3f_delete(std::vector<std::vector<cv::Point3f>>* instance) {
		delete instance;
	}

	std::vector<std::vector<cv::Point3f>>* cv_VectorOfVectorOfPoint3f_new() {
		return new std::vector<std::vector<cv::Point3f>>();
	}

	size_t cv_VectorOfVectorOfPoint3f_len(const std::vector<std::vector<cv::Point3f>>* instance) {
		return instance->size();
	}

	bool cv_VectorOfVectorOfPoint3f_is_empty(const std::vector<std::vector<cv::Point3f>>* instance) {
		return instance->empty();
	}

	size_t cv_VectorOfVectorOfPoint3f_capacity(const std::vector<std::vector<cv::Point3f>>* instance) {
		return instance->capacity();
	}

	void cv_VectorOfVectorOfPoint3f_shrink_to_fit(std::vector<std::vector<cv::Point3f>>* instance) {
		instance->shrink_to_fit();
	}

	void cv_VectorOfVectorOfPoint3f_reserve(std::vector<std::vector<cv::Point3f>>* instance, size_t additional) {
		instance->reserve(instance->size() + additional);
	}

	void cv_VectorOfVectorOfPoint3f_remove(std::vector<std::vector<cv::Point3f>>* instance, size_t index) {
		instance->erase(instance->begin() + index);
	}

	void cv_VectorOfVectorOfPoint3f_swap(std::vector<std::vector<cv::Point3f>>* instance, size_t index1, size_t index2) {
		std::swap((*instance)[index1], (*instance)[index2]);
	}

	void cv_VectorOfVectorOfPoint3f_clear(std::vector<std::vector<cv::Point3f>>* instance) {
		instance->clear();
	}

	void cv_VectorOfVectorOfPoint3f_push(std::vector<std::vector<cv::Point3f>>* instance, std::vector<cv::Point3f>* val) {
		instance->push_back(*val);
	}

	void cv_VectorOfVectorOfPoint3f_insert(std::vector<std::vector<cv::Point3f>>* instance, size_t index, std::vector<cv::Point3f>* val) {
		instance->insert(instance->begin() + index, *val);
	}

	Result<std::vector<cv::Point3f>*> cv_VectorOfVectorOfPoint3f_get(const std::vector<std::vector<cv::Point3f>>* instance, size_t index) {
		return Ok<std::vector<cv::Point3f>*>(new std::vector<cv::Point3f>((*instance)[index]));
	}

	void cv_VectorOfVectorOfPoint3f_set(std::vector<std::vector<cv::Point3f>>* instance, size_t index, std::vector<cv::Point3f>* val) {
		(*instance)[index] = *val;
	}

	Result<cv::_InputArray*> cv_VectorOfVectorOfPoint3f_input_array(std::vector<std::vector<cv::Point3f>>* instance) {
		try {
			return Ok(new cv::_InputArray(*instance));
		} OCVRS_CATCH(Result<cv::_InputArray*>)
	}
	
	Result<cv::_OutputArray*> cv_VectorOfVectorOfPoint3f_output_array(std::vector<std::vector<cv::Point3f>>* instance) {
		try {
			return Ok(new cv::_OutputArray(*instance));
		} OCVRS_CATCH(Result<cv::_OutputArray*>)
	}
	
	Result<cv::_InputOutputArray*> cv_VectorOfVectorOfPoint3f_input_output_array(std::vector<std::vector<cv::Point3f>>* instance) {
		try {
			return Ok(new cv::_InputOutputArray(*instance));
		} OCVRS_CATCH(Result<cv::_InputOutputArray*>)
	}
	
}


