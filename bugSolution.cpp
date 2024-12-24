std::vector<int> vec = {1, 2, 3};

// Correct solution 1: Iterate backwards
for (int i = vec.size() - 1; i >= 0; --i) {
  vec.erase(vec.begin() + i);
}

// Correct solution 2: Use iterator
for (auto it = vec.begin(); it != vec.end(); ) {
  if (/* condition to erase */) {
    it = vec.erase(it);
  } else {
    ++it;
  }
}

// Correct solution 3: Remove elements by value, preserving order
vec.erase(std::remove(vec.begin(), vec.end(), /* value to remove */), vec.end());