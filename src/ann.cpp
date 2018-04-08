#include "ann.h"

/* C++ code here. */
 // C++14 generalized lambda (could use "auto" for the type of a parameter)
 #include <iostream>
 
 int main() {
     std::cout << [](auto a, auto b) { return a + b; } (5, 6) << std::endl;
     std::cout << [](auto a, auto b) { return a + b; } (5.23, 6.45) << std::endl;
     return 0;
}
