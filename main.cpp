#include <iostream>
#include <vector>
#include "sort.h"
#include "BubbleSort.h"
#include "QuickSort.h"
#include "RecursiveBinarySearch.h"

int main() {
    // Input list of integers
    std::vector<int> inputList;
    int num;
    while (std::cin >> num) {
        inputList.push_back(num);
    }

    // Instantiate QuickSort to sort the list
    QuickSort quickSort;
    std::vector<int> sortedList = quickSort.sort(inputList);

    // Instantiate RecursiveBinarySearch to search for 1
    RecursiveBinarySearch binarySearch;
    bool found = binarySearch.search(sortedList, 1);

    // Output result followed by the sorted list
    std::cout << (found ? "true" : "false") << " ";
    for (int num : sortedList) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
