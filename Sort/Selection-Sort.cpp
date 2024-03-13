void SelectionSort(vector<int>& values) {
  for (auto i = values.begin(); i != values.end(); ++i) {
    auto j = std::min_element(i, values.end());
    swap(*i, *j);
  }
}
