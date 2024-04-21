#ifndef QUICKSORT_H
#define QUICKSORT_H

#include "Sort.h"

#include <iostream>
#include <vector>

using namespace std;
class Quicksort:public Sort{
    public:
        std::vector<int> sort(std::vector<int> list);
};


#endif 