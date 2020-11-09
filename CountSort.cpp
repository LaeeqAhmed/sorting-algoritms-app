#include "CountSort.h"


int CountSort::getMax(int* array, int size) {
    int max = array[1];
    for (int i = 2; i <= size; i++) {
        if (array[i] > max)
            max = array[i];
    }
    return max;
}

CountSort::CountSort(int* array, int size) {
    // create buckets
    int* counter = new int[size + 1];

    // fill buckets
    for (int i = 0; i < size; i++) {
        counter[i]++;
    }

    // sort array
    int ndx = 0;
    for (int i = 0; i < size + 1; i++) {
        while (0 < counter[i]) {
            array[ndx++] = i;
            counter[i]--;
        }
    }
}

