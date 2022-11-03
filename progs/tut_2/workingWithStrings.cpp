#include <iostream>

using namespace std;

int main() {
    string phrase = "Giraffe Academy";

    cout << phrase;
    cout << phrase.length();
    cout << phrase[2];
    
    // find char or string
    // second parameter is starting index
    cout << phrase.find("raffe", 0);

    // uses startingIndex & length, not startingIndex and endingIndex.
    cout << phrase.substr(8, 3);
    return 0;
}