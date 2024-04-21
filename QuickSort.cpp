#include "QuickSort.h"
#include <iostream>
#include <vector>

std::vector<int> QuickSort::sort(std::vector<int> list){

    quicksort(list, 0, list.size() - 1);
    return list;

}

int QuickSort::partition(std::vector<int>& list, int low, int high) {
    int pivot = list[low];
    int i = low + 1; // Start from the element after the pivot
    for (int j = low + 1; j <= high; ++j) {
        if (list[j] < pivot) {
            std::swap(list[i], list[j]);
            ++i;
        }
    }
    std::swap(list[low], list[i - 1]); // Swap pivot with the rightmost element of the left partition
    return i - 1;
}

void QuickSort::quicksort(std::vector<int>& list, int low, int high) {
    if (low < high) {
        if (high - low + 1 >= 3) {
            int third = low + 2; // Index of the third element
            std::swap(list[low + 1], list[third]); // Swap third element with the second element
        }
        int pi = partition(list, low, high);
        quicksort(list, low, pi - 1);
        quicksort(list, pi + 1, high);
    }
}
