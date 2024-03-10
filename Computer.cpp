#ifndef COMPUTER_FILE
#define COMPUTER_FILE

#include "Computer.h"
#include "Move.h"
#include "Rock.h"
#include <iostream>

using namespace std;

Move* Computer::makeMove(){

    Move* rockMove = new Rock();
    return rockMove;

}

#endif