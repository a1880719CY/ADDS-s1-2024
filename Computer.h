#include "Player.h"
#include <iostream>
#include <string>

using namespace std;

class Computer: public Player{
    public:
        Computer():Player("Computer") {};
        char makeMove();
        
};