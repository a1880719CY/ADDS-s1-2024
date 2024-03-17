#ifndef REVERSER_H
#define REVERSER_H

#include <iostream>

using namespace std;
class Reverser {
    private:
        int newNum = 0;
    public:
        int reverseDigit(int value);
        string reverseString(string characters);
};


#endif 