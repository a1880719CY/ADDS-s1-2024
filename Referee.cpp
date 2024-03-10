#include "Referee.h"
#include "Player.h"
#include "Move.h"
#include <iostream>
#include <algorithm> 

using namespace std;

Player* Referee::refGame(Player* player1, Player* player2){
    
    Move* p1Res = player1->makeMove();
    Move* p2Res = player2->makeMove();

    int p1Win = count(p1Res->getCounterName().begin(), p1Res->getCounterName().end(), p2Res->getName()); 
    int p2Win = count(p2Res->getCounterName().begin(), p2Res->getCounterName().end(), p1Res->getName()); 
  
    if (p1Win > 0) {  

        return player1;

    } 
    else if (p2Win > 0){ 

        return player2;
        
    } 
    return nullptr;

        
}