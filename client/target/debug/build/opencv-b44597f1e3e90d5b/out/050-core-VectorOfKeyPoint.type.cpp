extern "C" {
	void cv_VectorOfKeyPoint_delete(std::vector<cv::KeyPoint>* instance) {
		delete instance;
	}

	std::vector<cv::KeyPoint>* cv_VectorOfKeyPoint_new() {
		return new std::vector<cv::KeyPoint>();
	}

	size_t cv_VectorOfKeyPoint_len(const std::vector<cv::KeyPoint>* instance) {
		return instance->size();
	}

	bool cv_VectorOfKeyPoint_is_empty(const std::vector<cv::KeyPoint>* instance) {
		return instance->empty();
	}

	size_t cv_VectorOfKeyPoint_capacity(const std::vector<cv::KeyPoint>* instance) {
		return instance->capacity();
	}

	void cv_VectorOfKeyPoint_shrink_to_fit(std::vector<cv::KeyPoint>* instance) {
		instance->shrink_to_fit();
	}

	void cv_VectorOfKeyPoint_reserve(std::vector<cv::KeyPoint>* instance, size_t additional) {
		instance->reserve(instance->size() + additional);
	}

	void cv_VectorOfKeyPoint_remove(std::vector<cv::KeyPoint>* instance, size_t index) {
		instance->erase(instance->begin() + index);
	}

	void cv_VectorOfKeyPoint_swap(std::vector<cv::KeyPoint>* instance, size_t index1, size_t index2) {
		std::swap((*instance)[index1], (*instance)[index2]);
	}

	void cv_VectorOfKeyPoint_clear(std::vector<cv::KeyPoint>* instance) {
		instance->clear();
	}

	void cv_VectorOfKeyPoint_push(std::vector<cv::KeyPoint>* instance, const cv::KeyPoint* val) {
		instance->push_back(*val);
	}

	void cv_VectorOfKeyPoint_insert(std::vector<cv::KeyPoint>* instance, size_t index, const cv::KeyPoint* val) {
		instance->insert(instance->begin() + index, *val);
	}

	Result<cv::KeyPoint> cv_VectorOfKeyPoint_get(const std::vector<cv::KeyPoint>* instance, size_t index) {
		return Ok<cv::KeyPoint>((*instance)[index]);
	}

	void cv_VectorOfKeyPoint_set(std::vector<cv::KeyPoint>* instance, size_t index, const cv::KeyPoint* val) {
		(*instance)[index] = *val;
	}

	const cv::KeyPoint* cv_VectorOfKeyPoint_data(std::vector<cv::KeyPoint>* instance) {
		return instance->data();
	}
	
}


