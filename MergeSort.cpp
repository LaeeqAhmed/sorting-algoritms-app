#include "MergeSort.h"


void MergeSort::merge(int* arr, int beg, int mid, int end) {
    int left = mid - beg + 1;
    int right = end - mid;

    int* Left_arr = new int[left];
    int* Right_arr = new int[right];

    for (int i = 0; i < left; ++i)
        Left_arr[i] = arr[beg + i];

    for (int j = 0; j < right; ++j)
        Right_arr[j] = arr[mid + 1 + j];

    int i = 0, j = 0;
    int k = beg;
    while (i < left && j < right) {
        if (Left_arr[i] <= Right_arr[j]) {
            arr[k] = Left_arr[i];
            i++;
        }
        else {
            arr[k] = Right_arr[j];
            j++;
        }
        k++;
    }
    while (i < left) {
        arr[k] = Left_arr[i];
        i++; k++;
    }
    while (j < right) {
        arr[k] = Right_arr[j];
        j++; k++;
    }
}

MergeSort::MergeSort(int* arr, int beg, int end) {
    if (beg < end) {
        int mid = (beg + end) / 2;
        MergeSort(arr, beg, mid);
        MergeSort(arr, mid + 1, end);
        merge(arr, beg, mid, end);
    }
}