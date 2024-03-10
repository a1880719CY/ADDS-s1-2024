#ifndef MONKEY_FILE
#define MONKEY_FILE

#include "Move.h"
#include "Monkey.h"
#include <vector>
#include <string>
#include <iostream>

using namespace std;

Monkey::Monkey() : Move("Monkey", vector<string> { "Ninja", "Robot"}){};

#endif