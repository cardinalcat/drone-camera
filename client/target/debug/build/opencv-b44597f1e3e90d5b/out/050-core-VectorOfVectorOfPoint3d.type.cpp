extern "C" {
	void cv_VectorOfVectorOfPoint3d_delete(std::vector<std::vector<cv::Point3d>>* instance) {
		delete instance;
	}

	std::vector<std::vector<cv::Point3d>>* cv_VectorOfVectorOfPoint3d_new() {
		return new std::vector<std::vector<cv::Point3d>>();
	}

	size_t cv_VectorOfVectorOfPoint3d_len(const std::vector<std::vector<cv::Point3d>>* instance) {
		return instance->size();
	}

	bool cv_VectorOfVectorOfPoint3d_is_empty(const std::vector<std::vector<cv::Point3d>>* instance) {
		return instance->empty();
	}

	size_t cv_VectorOfVectorOfPoint3d_capacity(const std::vector<std::vector<cv::Point3d>>* instance) {
		return instance->capacity();
	}

	void cv_VectorOfVectorOfPoint3d_shrink_to_fit(std::vector<std::vector<cv::Point3d>>* instance) {
		instance->shrink_to_fit();
	}

	void cv_VectorOfVectorOfPoint3d_reserve(std::vector<std::vector<cv::Point3d>>* instance, size_t additional) {
		instance->reserve(instance->size() + additional);
	}

	void cv_VectorOfVectorOfPoint3d_remove(std::vector<std::vector<cv::Point3d>>* instance, size_t index) {
		instance->erase(instance->begin() + index);
	}

	void cv_VectorOfVectorOfPoint3d_swap(std::vector<std::vector<cv::Point3d>>* instance, size_t index1, size_t index2) {
		std::swap((*instance)[index1], (*instance)[index2]);
	}

	void cv_VectorOfVectorOfPoint3d_clear(std::vector<std::vector<cv::Point3d>>* instance) {
		instance->clear();
	}

	void cv_VectorOfVectorOfPoint3d_push(std::vector<std::vector<cv::Point3d>>* instance, std::vector<cv::Point3d>* val) {
		instance->push_back(*val);
	}

	void cv_VectorOfVectorOfPoint3d_insert(std::vector<std::vector<cv::Point3d>>* instance, size_t index, std::vector<cv::Point3d>* val) {
		instance->insert(instance->begin() + index, *val);
	}

	Result<std::vector<cv::Point3d>*> cv_VectorOfVectorOfPoint3d_get(const std::vector<std::vector<cv::Point3d>>* instance, size_t index) {
		return Ok<std::vector<cv::Point3d>*>(new std::vector<cv::Point3d>((*instance)[index]));
	}

	void cv_VectorOfVectorOfPoint3d_set(std::vector<std::vector<cv::Point3d>>* instance, size_t index, std::vector<cv::Point3d>* val) {
		(*instance)[index] = *val;
	}

	Result<cv::_InputArray*> cv_VectorOfVectorOfPoint3d_input_array(std::vector<std::vector<cv::Point3d>>* instance) {
		try {
			return Ok(new cv::_InputArray(*instance));
		} OCVRS_CATCH(Result<cv::_InputArray*>)
	}
	
	Result<cv::_OutputArray*> cv_VectorOfVectorOfPoint3d_output_array(std::vector<std::vector<cv::Point3d>>* instance) {
		try {
			return Ok(new cv::_OutputArray(*instance));
		} OCVRS_CATCH(Result<cv::_OutputArray*>)
	}
	
	Result<cv::_InputOutputArray*> cv_VectorOfVectorOfPoint3d_input_output_array(std::vector<std::vector<cv::Point3d>>* instance) {
		try {
			return Ok(new cv::_InputOutputArray(*instance));
		} OCVRS_CATCH(Result<cv::_InputOutputArray*>)
	}
	
}


