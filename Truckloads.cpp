#include "Truckloads.h"
#include <iostream>

int Truckloads::numTrucks(int numCrates, int loadSize){
    static int numTrckNeed = 1;
    cout << numTrckNeed << endl;
    if (numCrates <= loadSize){

        return numTrckNeed;

    } else {

        int subCrateNum = numCrates/2;
        numTrckNeed = numTrckNeed*2;
        return numTrucks(subCrateNum, loadSize);

    }

}