#include <iostream>
#include <limits> // Required for std::numeric_limits
#include <cmath>
int main() {
    // Integer types
    std::cout << "Size of char: " 
              << sizeof(char) << " bytes" << std::endl;
    std::cout << "Range of char: " 
              << static_cast<int>(std::numeric_limits<char>::min()) << " to " 
              << static_cast<int>(std::numeric_limits<char>::max()) << std::endl;
    std::cout << "Size of signed char: " 
              << sizeof(signed char) << " bytes" << std::endl;
    std::cout << "Range of signed char: " 
              << static_cast<int>(std::numeric_limits<signed char>::min()) << " to " 
              << static_cast<int>(std::numeric_limits<signed char>::max()) << std::endl;
    std::cout << "Size of unsigned char: " 
              << sizeof(unsigned char) << " bytes" << std::endl;
    std::cout << "Range of unsigned char: " 
              << static_cast<int>(std::numeric_limits<unsigned char>::min()) << " to " 
              << static_cast<int>(std::numeric_limits<unsigned char>::max()) << std::endl;
    std::cout << "Size of short : " 
              << sizeof(short) << " bytes" << std::endl;
    std::cout << "Range of short: " 
              << std::numeric_limits<short>::min() << " to " 
              << std::numeric_limits<short>::max() << std::endl;
    std::cout << "Size of unsigned short: " 
              << sizeof(unsigned short) << " bytes" << std::endl;
    std::cout << "Range of unsigned short: " 
              << std::numeric_limits<unsigned short>::min() << " to " 
              << std::numeric_limits<unsigned short>::max() << std::endl;
    std::cout << "Size of int: " 
              << sizeof(int) << " bytes" << std::endl;
    std::cout << "Range of int: " 
              << std::numeric_limits<int>::min() << " to " 
              << std::numeric_limits<int>::max() << std::endl;
    std::cout << "Size of unsigned int: " 
              << sizeof(unsigned int) << " bytes" << std::endl;
    std::cout << "Range of unsigned int: " 
              << std::numeric_limits<unsigned int>::min() << " to " 
              << std::numeric_limits<unsigned int>::max() << std::endl;
    std::cout << "Size of long: " 
              << sizeof(long) << " bytes" << std::endl;
    std::cout << "Range of long: " 
              << std::numeric_limits<long>::min() << " to " 
              << std::numeric_limits<long>::max() << std::endl;
    std::cout << "Size of unsigned long: " 
              << sizeof(unsigned long) << " bytes" << std::endl;          
    std::cout << "Range of unsigned long: " 
              << std::numeric_limits<unsigned long>::min() << " to " 
              << std::numeric_limits<unsigned long>::max() << std::endl;
    std::cout << "Size of long long: " 
              << sizeof(long long) << " bytes" << std::endl;
    std::cout << "Range of long long: " 
              << std::numeric_limits<long long>::min() << " to " 
              << std::numeric_limits<long long>::max() << std::endl;
    std::cout << "Size of unsigned long long: " 
              << sizeof(unsigned long long) << "bytes" << std::endl;
    std::cout << "Range of unsigned long long: " 
              << std::numeric_limits<unsigned long long>::min() << " to " 
              << std::numeric_limits<unsigned long long>::max() << std::endl;
    std::cout << "Size of float: " 
              << sizeof(float) << " bytes" << std::endl;
    // Floating-point types
    std::cout << "Range of float: " 
              << std::numeric_limits<float>::lowest() << " to " 
              << std::numeric_limits<float>::max() << std::endl;
    std::cout << "Size of double: " 
              << sizeof(double) << " bytes" << std::endl;   
    std::cout << "Range of double: " 
              << std::numeric_limits<double>::lowest() << " to " 
              << std::numeric_limits<double>::max() << std::endl;
    std::cout << "Size of long double: " 
              << sizeof(long double) << " bytes" << std::endl;
    std::cout << "Range of long double: " 
              << std::numeric_limits<long double>::lowest() << " to " 
              << std::numeric_limits<long double>::max() << std::endl;

    return 0;
}