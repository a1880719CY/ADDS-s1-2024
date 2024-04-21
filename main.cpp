#include <iostream>
#include <vector>
#include "sort.h"
#include "BubbleSort.h"
#include "QuickSort.h"
#include "RecursiveBinarySearch.h"

int main() {
    std::vector<int> a = {6, 4, 5, 6};
    std::vector<int> b = {1, 2, 4, 7};

    a.insert(a.end(), b.begin(), b.end());

    BubbleSort bubbleSort;
    std::vector<int> c = bubbleSort.sort(a);

    for(std::vector<int>::size_type i = 0; i < c.size(); i++) {
        std::cout << c.at(i) << ' ';
    }

    return 0;
}
