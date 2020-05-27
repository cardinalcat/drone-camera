extern "C" {
	void cv_VectorOfsize_t_delete(std::vector<size_t>* instance) {
		delete instance;
	}

	std::vector<size_t>* cv_VectorOfsize_t_new() {
		return new std::vector<size_t>();
	}

	size_t cv_VectorOfsize_t_len(const std::vector<size_t>* instance) {
		return instance->size();
	}

	bool cv_VectorOfsize_t_is_empty(const std::vector<size_t>* instance) {
		return instance->empty();
	}

	size_t cv_VectorOfsize_t_capacity(const std::vector<size_t>* instance) {
		return instance->capacity();
	}

	void cv_VectorOfsize_t_shrink_to_fit(std::vector<size_t>* instance) {
		instance->shrink_to_fit();
	}

	void cv_VectorOfsize_t_reserve(std::vector<size_t>* instance, size_t additional) {
		instance->reserve(instance->size() + additional);
	}

	void cv_VectorOfsize_t_remove(std::vector<size_t>* instance, size_t index) {
		instance->erase(instance->begin() + index);
	}

	void cv_VectorOfsize_t_swap(std::vector<size_t>* instance, size_t index1, size_t index2) {
		std::swap((*instance)[index1], (*instance)[index2]);
	}

	void cv_VectorOfsize_t_clear(std::vector<size_t>* instance) {
		instance->clear();
	}

	void cv_VectorOfsize_t_push(std::vector<size_t>* instance, size_t val) {
		instance->push_back(val);
	}

	void cv_VectorOfsize_t_insert(std::vector<size_t>* instance, size_t index, size_t val) {
		instance->insert(instance->begin() + index, val);
	}

	Result<size_t> cv_VectorOfsize_t_get(const std::vector<size_t>* instance, size_t index) {
		return Ok<size_t>((*instance)[index]);
	}

	void cv_VectorOfsize_t_set(std::vector<size_t>* instance, size_t index, size_t val) {
		(*instance)[index] = val;
	}

	const size_t* cv_VectorOfsize_t_data(std::vector<size_t>* instance) {
		return instance->data();
	}
	
}


