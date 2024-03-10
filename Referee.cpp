#include "Referee.h"
#include "Player.h"
#include "Move.h"
#include <iostream>

using namespace std;

Player* Referee::refGame(Player* player1, Player* player2){
    
    Move p1Res = player1->makeMove();
    Move p2Res = player2->makeMove();

    if (p1Res == p2Res) {

        return nullptr;

    } else if (p1Res == 'P' && p2Res == 'R' || p1Res == 'R' && p2Res == 'S' || p1Res == 'S' && p2Res == 'P'){

        return player1;

    } else {

        return player2;
        
    }

        
}