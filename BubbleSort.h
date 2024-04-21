#ifndef BUBBLESORT_H
#define BUBBLESORT_H

#include "Sort.h"

#include <iostream>
#include <vector>

using namespace std;
class BubbleSort:public Sort{
    public:
        std::vector<int> sort(std::vector<int> list);
};


#endif 