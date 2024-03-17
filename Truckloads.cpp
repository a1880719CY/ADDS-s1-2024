#include "Truckloads.h"
#include <iostream>

int Truckloads::numTrucks(int numCrates, int loadSize){
    static int numTrckNeed = 1;
    cout << numTrckNeed << endl;
    cout << "Current crate:"<< numCrates << endl;
    int subCrateNum = numCrates/2;
    if (numCrates%2 == 1){
        if (subCrateNum <= loadSize){
            numTrckNeed++;
            cout<<"Should add 1"<<endl;
        }
        subCrateNum++;
    }
    if (subCrateNum <= loadSize){

        return numTrckNeed;

    } else {
        
        //final part, just don't touch
        numTrckNeed = numTrckNeed*2;
        return numTrucks(subCrateNum, loadSize);
    }

}