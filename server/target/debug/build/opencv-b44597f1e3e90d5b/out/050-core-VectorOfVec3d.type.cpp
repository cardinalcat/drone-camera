extern "C" {
	void cv_VectorOfVec3d_delete(std::vector<cv::Vec3d>* instance) {
		delete instance;
	}

	std::vector<cv::Vec3d>* cv_VectorOfVec3d_new() {
		return new std::vector<cv::Vec3d>();
	}

	size_t cv_VectorOfVec3d_len(const std::vector<cv::Vec3d>* instance) {
		return instance->size();
	}

	bool cv_VectorOfVec3d_is_empty(const std::vector<cv::Vec3d>* instance) {
		return instance->empty();
	}

	size_t cv_VectorOfVec3d_capacity(const std::vector<cv::Vec3d>* instance) {
		return instance->capacity();
	}

	void cv_VectorOfVec3d_shrink_to_fit(std::vector<cv::Vec3d>* instance) {
		instance->shrink_to_fit();
	}

	void cv_VectorOfVec3d_reserve(std::vector<cv::Vec3d>* instance, size_t additional) {
		instance->reserve(instance->size() + additional);
	}

	void cv_VectorOfVec3d_remove(std::vector<cv::Vec3d>* instance, size_t index) {
		instance->erase(instance->begin() + index);
	}

	void cv_VectorOfVec3d_swap(std::vector<cv::Vec3d>* instance, size_t index1, size_t index2) {
		std::swap((*instance)[index1], (*instance)[index2]);
	}

	void cv_VectorOfVec3d_clear(std::vector<cv::Vec3d>* instance) {
		instance->clear();
	}

	void cv_VectorOfVec3d_push(std::vector<cv::Vec3d>* instance, const cv::Vec3d* val) {
		instance->push_back(*val);
	}

	void cv_VectorOfVec3d_insert(std::vector<cv::Vec3d>* instance, size_t index, const cv::Vec3d* val) {
		instance->insert(instance->begin() + index, *val);
	}

	Result<cv::Vec3d> cv_VectorOfVec3d_get(const std::vector<cv::Vec3d>* instance, size_t index) {
		return Ok<cv::Vec3d>((*instance)[index]);
	}

	void cv_VectorOfVec3d_set(std::vector<cv::Vec3d>* instance, size_t index, const cv::Vec3d* val) {
		(*instance)[index] = *val;
	}

	const cv::Vec3d* cv_VectorOfVec3d_data(std::vector<cv::Vec3d>* instance) {
		return instance->data();
	}
	
	Result<cv::_InputArray*> cv_VectorOfVec3d_input_array(std::vector<cv::Vec3d>* instance) {
		try {
			return Ok(new cv::_InputArray(*instance));
		} OCVRS_CATCH(Result<cv::_InputArray*>)
	}
	
	Result<cv::_OutputArray*> cv_VectorOfVec3d_output_array(std::vector<cv::Vec3d>* instance) {
		try {
			return Ok(new cv::_OutputArray(*instance));
		} OCVRS_CATCH(Result<cv::_OutputArray*>)
	}
	
	Result<cv::_InputOutputArray*> cv_VectorOfVec3d_input_output_array(std::vector<cv::Vec3d>* instance) {
		try {
			return Ok(new cv::_InputOutputArray(*instance));
		} OCVRS_CATCH(Result<cv::_InputOutputArray*>)
	}
	
}


