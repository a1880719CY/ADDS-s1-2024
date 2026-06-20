
#ifndef COMPUTER_FILE
#define COMPUTER_FILE
#include "Player.h"
#include <iostream>
#include <string>

using namespace std;

class Computer: public Player{
    public:
        Computer():Player("Computer") {};
        Move * makeMove();
        
};

#endif