#ifndef PAPER_FILE
#define PAPER_FILE

#include "Move.h"
#include "Paper.h"
#include <vector>
#include <string>
#include <iostream>

using namespace std;

Paper::Paper() : Move("Paper", vector<string> { "Rock"}){};

#endif