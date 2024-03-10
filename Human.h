#include "Player.h"
#include "Move.h"
#include <iostream>
#include <string>

using namespace std;

class Human : public Player{
    public:
        Human();
        Human(std::string humanName);
        Move * makeMove();
        
};