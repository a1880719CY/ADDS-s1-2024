#ifndef MOVE_FILE
#define MOVE_FILE

#include "Player.h"
#include <iostream>
#include <string>

using namespace std;

class Move{
    private:
        string name;
    public:
        Move(){};
        Move(string name);
        string getName();
        
};

#endif