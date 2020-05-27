extern "C" {
	void cv_VectorOfKeyLine_delete(std::vector<cv::line_descriptor::KeyLine>* instance) {
		delete instance;
	}

	std::vector<cv::line_descriptor::KeyLine>* cv_VectorOfKeyLine_new() {
		return new std::vector<cv::line_descriptor::KeyLine>();
	}

	size_t cv_VectorOfKeyLine_len(const std::vector<cv::line_descriptor::KeyLine>* instance) {
		return instance->size();
	}

	bool cv_VectorOfKeyLine_is_empty(const std::vector<cv::line_descriptor::KeyLine>* instance) {
		return instance->empty();
	}

	size_t cv_VectorOfKeyLine_capacity(const std::vector<cv::line_descriptor::KeyLine>* instance) {
		return instance->capacity();
	}

	void cv_VectorOfKeyLine_shrink_to_fit(std::vector<cv::line_descriptor::KeyLine>* instance) {
		instance->shrink_to_fit();
	}

	void cv_VectorOfKeyLine_reserve(std::vector<cv::line_descriptor::KeyLine>* instance, size_t additional) {
		instance->reserve(instance->size() + additional);
	}

	void cv_VectorOfKeyLine_remove(std::vector<cv::line_descriptor::KeyLine>* instance, size_t index) {
		instance->erase(instance->begin() + index);
	}

	void cv_VectorOfKeyLine_swap(std::vector<cv::line_descriptor::KeyLine>* instance, size_t index1, size_t index2) {
		std::swap((*instance)[index1], (*instance)[index2]);
	}

	void cv_VectorOfKeyLine_clear(std::vector<cv::line_descriptor::KeyLine>* instance) {
		instance->clear();
	}

	void cv_VectorOfKeyLine_push(std::vector<cv::line_descriptor::KeyLine>* instance, const cv::line_descriptor::KeyLine* val) {
		instance->push_back(*val);
	}

	void cv_VectorOfKeyLine_insert(std::vector<cv::line_descriptor::KeyLine>* instance, size_t index, const cv::line_descriptor::KeyLine* val) {
		instance->insert(instance->begin() + index, *val);
	}

	Result<cv::line_descriptor::KeyLine> cv_VectorOfKeyLine_get(const std::vector<cv::line_descriptor::KeyLine>* instance, size_t index) {
		return Ok<cv::line_descriptor::KeyLine>((*instance)[index]);
	}

	void cv_VectorOfKeyLine_set(std::vector<cv::line_descriptor::KeyLine>* instance, size_t index, const cv::line_descriptor::KeyLine* val) {
		(*instance)[index] = *val;
	}

	const cv::line_descriptor::KeyLine* cv_VectorOfKeyLine_data(std::vector<cv::line_descriptor::KeyLine>* instance) {
		return instance->data();
	}
	
}


