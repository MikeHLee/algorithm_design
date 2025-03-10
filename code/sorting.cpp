#include <algorithm>
#include <vector>

// Generic swap function using std::swap
template<typename T>
void swap(T& a, T& b) {
    std::swap(a, b);
}

// Generic insertion sort implementation
// Parameters:
//   arr: array of items to sort
//   n: number of items in the array
template<typename T>
void insertion_sort(T arr[], size_t n) {
    for (size_t i = 1; i < n; i++) {
        size_t j = i;
        while (j > 0 && arr[j] < arr[j-1]) {
            swap(arr[j], arr[j-1]);
            j--;
        }
    }
}

// Vector overload for more modern C++ usage
template<typename T>
void insertion_sort(std::vector<T>& arr) {
    insertion_sort(arr.data(), arr.size());
}