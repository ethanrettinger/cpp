#include <iostream>

using namespace std;

int main() {
    // I skipped past a lot of the other parts since it's mostly just
    // programming concepts. I don't know much about pointers though.

    int age = 17;
    double gpa = 4.0;
    string name = "Ethan";

    cout << &age;       // print location in memory, a.k.a. a pointer

    int *pAge = &age;   // store pointer, * indicates pointer type
                        // lowercase p in front of var is good practice

    cout << *pAge;      // dereference; show value at that pointer

    cout << *&gpa;      // dereference variable

    
}