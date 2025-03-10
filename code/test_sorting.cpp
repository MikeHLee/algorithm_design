#include <iostream>
#include <vector>
#include <random>
#include <algorithm>
#include <cassert>
#include "sorting.cpp"

// Utility function to print a vector
template<typename T>
void print_vector(const std::vector<T>& vec, const std::string& label) {
    std::cout << label << ": ";
    for (const auto& item : vec) {
        std::cout << item << " ";
    }
    std::cout << "\n";
}

int main() {
    // Set up random number generator
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dis(1, 100);

    // Generate random vector
    const size_t size = 10;
    std::vector<int> numbers(size);
    for (size_t i = 0; i < size; i++) {
        numbers[i] = dis(gen);
    }

    // Save original for comparison
    std::vector<int> original = numbers;
    std::vector<int> std_sorted = numbers;

    // Print original vector
    print_vector(numbers, "Original");

    // Sort using our implementation
    insertion_sort(numbers);
    print_vector(numbers, "Insertion sorted");

    // Sort using std::sort for verification
    std::sort(std_sorted.begin(), std_sorted.end());
    print_vector(std_sorted, "std::sort");

    // Verify our sort matches std::sort
    assert(numbers == std_sorted && "Sorting verification failed!");
    std::cout << "Sorting verification passed!\n";

    return 0;
}
