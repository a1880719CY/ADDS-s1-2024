#include "Move.h"
#include <iostream>
#include <string>

using namespace std;

class Ninja : public Move{
    public:
        Human();
        Human(std::string humanName);
        char makeMove();
        
};