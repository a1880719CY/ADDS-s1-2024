#ifndef ROBOT_FILE
#define ROBOT_FILE

#include "Move.h"
#include "Robot.h"
#include <vector>
#include <string>
#include <iostream>

using namespace std;

Robot::Robot() : Move("Robot", vector<string> { "Zombie", "Ninja"}){};

#endif