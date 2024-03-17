#include "Reverser.h"
#include <iostream>

using namespace std;

int Reverser::reverseDigit(int value){
    static int newNum = 0;
    if(value <0){

        return -1;

    }
    if (value ==0){
        
        return newNum;
    } else {
        
        newNum = newNum * 10;
        newNum = newNum + (value%10);
        return reverseDigit(value/10);

    }

}
string Reverser::reverseString(string characters){
    int stringLength = characters.length();
    static string newString = "";
    if (stringLength == 0){
        return newString;
    } else {
        char lastCharacter = characters.at(stringLength-1);
        string newCharacter = "";
        newCharacter = lastCharacter;
        newString.append(newCharacter);
        characters.erase(stringLength - 1);
        return reverseString(characters);

    }


}