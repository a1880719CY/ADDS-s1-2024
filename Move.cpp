

#include "Move.h"
#include <vector>
#include <string>
#include <iostream>

using namespace std;

Move::Move(string name, vector<string> counterMove){

    this-> name = name;
    this->counterMove = counterMove;

}

string Move::getName(){

    return this->name;

}

vector<string> Move::getCounterName(){

    return this->counterMove;
}
