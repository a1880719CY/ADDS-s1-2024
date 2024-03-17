#include "Reverser.h"
#include <iostream>
#include <string>
using namespace std;

int main() {
    
    Reverser r;
    int reversedNumber = r.reverseDigit(232658957);
    string newString = r.reverseString("Hello");
    cout << reversedNumber << endl;
    cout << newString << endl;
    return 0;
}