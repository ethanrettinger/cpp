#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    int number = rand();        // generates same number every time prog is ran

    // generate (somewhat) truly random numbers
    srand(time(nullptr));                  // seed random number func

    int number  = rand();

    int numberWithLimit  =   rand() % 10;    // generate from 0-9
    int numberWithLimit2 =   rand() % 100;   // generate from 0-99
    cout << number;
    
    // try to minimize the amount of variables to optimize and save memory in
    // prod. environments.
    return 0;
}