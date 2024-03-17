#include "Truckloads.h"
#include <iostream>

int Truckloads::numTrucks(int numCrates, int loadSize){
    if (numCrates <= loadSize){
        
            return 1;
    
        } else {

            int leftsideNum = numCrates/2;
            int rightsideNum;
            if (numCrates%2 == 1){
                
                rightsideNum = leftsideNum + 1;
                
            } else {
                
                rightsideNum = leftsideNum;
                
            }
            
            return numTrucks(leftsideNum, loadSize) + numTrucks(rightsideNum, loadSize);
    }

}