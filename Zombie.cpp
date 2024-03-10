#ifndef ZOMBIE_FILE
#define ZOMBIE_FILE

#include "Move.h"
#include "Zombie.h"
#include <vector>
#include <string>
#include <iostream>

using namespace std;

Zombie::Zombie() : Move("Zombie", vector<string> { "Pirate", "Monkey"}){};

#endif