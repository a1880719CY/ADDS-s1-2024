#ifndef REFEREE_FILE
#define REFEREE_FILE

#include "Player.h"
#include <iostream>
#include <string>

using namespace std;

class Referee{
    public:
        Referee(){};
        Player* refGame(Player* player1, Player* player2);
        
};

#endif