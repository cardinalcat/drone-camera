extern "C" {
	void cv_VectorOfTarget_delete(std::vector<cv::dnn::Target>* instance) {
		delete instance;
	}

	std::vector<cv::dnn::Target>* cv_VectorOfTarget_new() {
		return new std::vector<cv::dnn::Target>();
	}

	size_t cv_VectorOfTarget_len(const std::vector<cv::dnn::Target>* instance) {
		return instance->size();
	}

	bool cv_VectorOfTarget_is_empty(const std::vector<cv::dnn::Target>* instance) {
		return instance->empty();
	}

	size_t cv_VectorOfTarget_capacity(const std::vector<cv::dnn::Target>* instance) {
		return instance->capacity();
	}

	void cv_VectorOfTarget_shrink_to_fit(std::vector<cv::dnn::Target>* instance) {
		instance->shrink_to_fit();
	}

	void cv_VectorOfTarget_reserve(std::vector<cv::dnn::Target>* instance, size_t additional) {
		instance->reserve(instance->size() + additional);
	}

	void cv_VectorOfTarget_remove(std::vector<cv::dnn::Target>* instance, size_t index) {
		instance->erase(instance->begin() + index);
	}

	void cv_VectorOfTarget_swap(std::vector<cv::dnn::Target>* instance, size_t index1, size_t index2) {
		std::swap((*instance)[index1], (*instance)[index2]);
	}

	void cv_VectorOfTarget_clear(std::vector<cv::dnn::Target>* instance) {
		instance->clear();
	}

	void cv_VectorOfTarget_push(std::vector<cv::dnn::Target>* instance, cv::dnn::Target val) {
		instance->push_back(val);
	}

	void cv_VectorOfTarget_insert(std::vector<cv::dnn::Target>* instance, size_t index, cv::dnn::Target val) {
		instance->insert(instance->begin() + index, val);
	}

	Result<cv::dnn::Target> cv_VectorOfTarget_get(const std::vector<cv::dnn::Target>* instance, size_t index) {
		return Ok<cv::dnn::Target>((*instance)[index]);
	}

	void cv_VectorOfTarget_set(std::vector<cv::dnn::Target>* instance, size_t index, cv::dnn::Target val) {
		(*instance)[index] = val;
	}

	const cv::dnn::Target* cv_VectorOfTarget_data(std::vector<cv::dnn::Target>* instance) {
		return instance->data();
	}
	
}


