#ifndef ALGORITHMS_H
#define ALGORITHMS_H

#include <bits/stdc++.h>

using namespace std;

template < typename T = int >
int partition(T* arr, int low, int high) {
    T pivot = arr[high];
    int i = low - 1;

    for (int j = low; j < high; ++j) {
        if (comp(arr[j], pivot)) {
            ++i;
            swap(arr[i], arr[j]);
        }
    }

    ++i;
    swap(arr[i], arr[high]);
    return i;
}

template < typename T = int >
void quickSort (T* arr, int low, int high) {
    if (low > high || low < 0) {
        return;
    }

    int pivot = partition(arr, low, high, comp);

    quickSort(arr, low, pivot - 1);
    quickSort(arr, pivot + 1, high);
}



#endif