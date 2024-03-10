#ifndef HUMAN_FILE
#define HUMAN_FILE

#include "Human.h"
#include "Player.h"
#include "Move.h"
#include <iostream>
#include <string>

using namespace std;

Human::Human() : Player ("Human") {};
Human::Human(string name) : Player (name) {};

Move* Human::makeMove()
{
    char result;
    cout << "Enter move:" << endl;
    cin >> result;
    return nullptr;
    
}

#endif