#ifndef PIRATE_FILE
#define PIRATE_FILE

#include "Move.h"
#include "Pirate.h"
#include <vector>
#include <string>
#include <iostream>

using namespace std;

Pirate::Pirate() : Move("Pirate", vector<string> { "Robot", "Monkey"}){};

#endif