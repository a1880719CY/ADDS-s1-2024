#include "Referee.h"
#include "Player.h"
#include "Move.h"
#include <iostream>
#include <algorithm> 

using namespace std;

Player* Referee::refGame(Player* player1, Player* player2){
    
    Move* p1Res = player1->makeMove();
    Move* p2Res = player2->makeMove();


	vector<string>p1 = p1Res->getCounterName();
    vector<string>p2 = p2Res->getCounterName();

    if (p1Res->getName() == p2[0] || p1Res->getName() == p2[1]){

        return player2;

    } else if (p2Res->getName() == p1[0] || p2Res->getName() == p1[1]){

        return player2;

    }

return nullptr;

        
}