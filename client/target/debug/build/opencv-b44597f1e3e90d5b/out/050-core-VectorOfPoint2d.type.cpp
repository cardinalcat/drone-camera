extern "C" {
	void cv_VectorOfPoint2d_delete(std::vector<cv::Point2d>* instance) {
		delete instance;
	}

	std::vector<cv::Point2d>* cv_VectorOfPoint2d_new() {
		return new std::vector<cv::Point2d>();
	}

	size_t cv_VectorOfPoint2d_len(const std::vector<cv::Point2d>* instance) {
		return instance->size();
	}

	bool cv_VectorOfPoint2d_is_empty(const std::vector<cv::Point2d>* instance) {
		return instance->empty();
	}

	size_t cv_VectorOfPoint2d_capacity(const std::vector<cv::Point2d>* instance) {
		return instance->capacity();
	}

	void cv_VectorOfPoint2d_shrink_to_fit(std::vector<cv::Point2d>* instance) {
		instance->shrink_to_fit();
	}

	void cv_VectorOfPoint2d_reserve(std::vector<cv::Point2d>* instance, size_t additional) {
		instance->reserve(instance->size() + additional);
	}

	void cv_VectorOfPoint2d_remove(std::vector<cv::Point2d>* instance, size_t index) {
		instance->erase(instance->begin() + index);
	}

	void cv_VectorOfPoint2d_swap(std::vector<cv::Point2d>* instance, size_t index1, size_t index2) {
		std::swap((*instance)[index1], (*instance)[index2]);
	}

	void cv_VectorOfPoint2d_clear(std::vector<cv::Point2d>* instance) {
		instance->clear();
	}

	void cv_VectorOfPoint2d_push(std::vector<cv::Point2d>* instance, const cv::Point2d* val) {
		instance->push_back(*val);
	}

	void cv_VectorOfPoint2d_insert(std::vector<cv::Point2d>* instance, size_t index, const cv::Point2d* val) {
		instance->insert(instance->begin() + index, *val);
	}

	Result<cv::Point2d> cv_VectorOfPoint2d_get(const std::vector<cv::Point2d>* instance, size_t index) {
		return Ok<cv::Point2d>((*instance)[index]);
	}

	void cv_VectorOfPoint2d_set(std::vector<cv::Point2d>* instance, size_t index, const cv::Point2d* val) {
		(*instance)[index] = *val;
	}

	const cv::Point2d* cv_VectorOfPoint2d_data(std::vector<cv::Point2d>* instance) {
		return instance->data();
	}
	
	Result<cv::_InputArray*> cv_VectorOfPoint2d_input_array(std::vector<cv::Point2d>* instance) {
		try {
			return Ok(new cv::_InputArray(*instance));
		} OCVRS_CATCH(Result<cv::_InputArray*>)
	}
	
	Result<cv::_OutputArray*> cv_VectorOfPoint2d_output_array(std::vector<cv::Point2d>* instance) {
		try {
			return Ok(new cv::_OutputArray(*instance));
		} OCVRS_CATCH(Result<cv::_OutputArray*>)
	}
	
	Result<cv::_InputOutputArray*> cv_VectorOfPoint2d_input_output_array(std::vector<cv::Point2d>* instance) {
		try {
			return Ok(new cv::_InputOutputArray(*instance));
		} OCVRS_CATCH(Result<cv::_InputOutputArray*>)
	}
	
}


