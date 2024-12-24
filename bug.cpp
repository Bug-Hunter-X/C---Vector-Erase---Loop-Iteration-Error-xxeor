std::vector<int> vec = {1, 2, 3};

for (int i = 0; i < vec.size(); ++i) {
  vec.erase(vec.begin() + i);
}

// The loop is incorrect because erasing an element from the vector
// shifts subsequent elements, thus the index i is no longer valid
// after an element is erased.