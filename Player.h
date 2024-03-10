#ifndef PLAYER_FILE
#define PLAYER_FILE

#include "Move.h"
#include <iostream>
#include <string>

using namespace std;

class Player{
    private:
        string name;
    public:
        Player(){};
        Player(string name);
        virtual Move* makeMove();  // return type is changed, the return type of this is a hint to the polymorphism
        string getName();
     
};

#endif