#include <iostream>

int main() {
    double price = 99.99;
    float interestRate = 3.67f;
    long fileSize = 90000L;
    char letter = 'a';

    // auto keyword automatically assigns a type to a variable
    auto isValid = false;
    bool isValid = false;

    // always assign values to variables when creating them
    // the brace initializer operator (aggregate init.) is used
    // it does *NOT* allow narrowing

    int number = {}; // or {1.2}, {1239712}, {...};
    // = is preferred over {} when using the auto keyword.
    std::cout << number;
    
    return 0;
}