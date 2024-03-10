#include "Player.h"
#include "Move.h"
#include <iostream>
#include <string>

using namespace std;

class Computer: public Player{
    public:
        Computer():Player("Computer") {};
        Move * makeMove();
        
};