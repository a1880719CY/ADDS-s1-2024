#ifndef HUMAN_FILE
#define HUMAN_FILE

#include "Human.h"
#include "Player.h"
#include <iostream>
#include <string>

using namespace std;

Human::Human() : Player ("Human") {};
Human::Human(string name) : Player (name) {};

char Human::makeMove()
{
    char result;
    cout << "Enter move:" << endl;
    cin >> result;
    return result;
    
}

#endif