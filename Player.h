#ifndef PLAYER_FILE
#define PLAYER_FILE

#include <iostream>
#include <string>

using namespace std;

class Player{
    private:
        string name;
    public:
        Player(){};
        Player(string name);
        virtual char makeMove();
        string getName();

        
};

#endif