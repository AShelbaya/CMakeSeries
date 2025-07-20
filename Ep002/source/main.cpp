#include <iostream>
#include <concepts>

template<typename T>
requires std::integral<T>
T add(T a, T b) {
    return a + b;
}   

int main() {
    int x = 7, y = 3;
	std::cout << "Hello from C++20 with CMake on Linux/Windows!" << std::endl;
    std::cout << "Sum: " << add(x, y) << std::endl; // Valid usage with integral types

    // Uncommenting the following line will cause a compilation error
    // because std::string does not satisfy the std::integral concept.
    // std::string str1 = "Hello, ", str2 = "World!";
    // std::cout << "Concatenation: " << add(str1, str2) << std::endl;

    return 0;
}