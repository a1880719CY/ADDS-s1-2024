#include "Move.h"
#include <iostream>

using namespace std;

Move::Move(string name){

    this-> name = name;

}

string Move::getName(){

    return this->name;
    
}