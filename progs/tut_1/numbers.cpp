#include <iostream>

using namespace std; // just for a few lessons

int main() {
    // all equal
    int bNumber = 0b11111111;
    int xNumber = 0xFF;
    int dNumber = 255;

    // unsigned vs signed

    // unsigned cannot accept negative values. does not error out,
    // instead printing generates a large number.
    // not reccomended!
    unsigned int number = -255; // do not do this lol

    // narrowing conversion
    int number = 1'000'000;     // tidy separators

    short another = number;     // 16,960?
    short another{number};      // does not compile






    return 0;
}