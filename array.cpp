#include <iostream>
#include <array>

int main() {
    // Create a std::array with 5 elements
    std::array<int, 5> myArray = {1, 2, 3, 4, 5};

    // Access elements using a for loop
    std::cout << "The elements of the array are: ";
    for (const auto& element : myArray) {
        std::cout << element << " ";
    }
    std::cout << std::endl;

    // Access a specific element
    std::cout << "The first element is: " << myArray[0] << std::endl;

    // Access using the .at() method (with bounds checking)
    try {
        std::cout << "The third element is: " << myArray.at(2) << std::endl;
    } catch (const std::out_of_range& e) {
        std::cerr << "Error: Index out of range!" << std::endl;
    }

    // Size of the array
    std::cout << "The size of the array is: " << myArray.size() << std::endl;

    // Fill the array
    myArray.fill(10);
    std::cout << "After filling with 10: ";
    for (const auto& element : myArray) {
        std::cout << element << " ";
    }
    std::cout << std::endl;

    return 0;
}
