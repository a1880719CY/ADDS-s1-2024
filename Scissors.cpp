#ifndef SCISSORS_FILE
#define SCISSORS_FILE

#include "Move.h"
#include "Scissors.h"
#include <vector>
#include <string>
#include <iostream>

using namespace std;

Scissors::Scissors() : Move("Scissors", vector<string> { "Ninja", "Robot"}){};

#endif