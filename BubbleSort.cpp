#include "BubbleSort.h"
#include <iostream>
#include <vector>

std::vector<int> BubbleSort::sort(std::vector<int> list){
    static int numTimesDo = list.size()-1;
    if (numTimesDo <= 0 ){

        return list;

    } else {

        for (int i = 0; i < numTimesDo; i++){
            int checkingNum = list.at(i);
            if (list.at(i)>list.at(i+1)){
                list[i] = list[i+1];
                list[i+1] = checkingNum;
            }
        }
        numTimesDo--;
        return BubbleSort::sort(list);
    }

}