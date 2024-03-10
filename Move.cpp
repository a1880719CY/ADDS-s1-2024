#ifndef MOVE_FILE
#define MOVE_FILE

#include "Move.h"
#include <iostream>

using namespace std;

Move::Move(string name, vector<string> counterMove){

    this-> name = name;
    this->counterMove = counterMove;

}

string Move::getName(){

    return this->name;

}

#endif