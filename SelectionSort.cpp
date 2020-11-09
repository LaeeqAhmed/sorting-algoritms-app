#include "SelectionSort.h"

SelectionSort::SelectionSort(int* arr, int size)
{
        int i, j, min_idx;
        for (i = 0; i < size - 1; i++)
        {
            min_idx = i;
            for (j = i + 1; j < size; j++)
            {
                if (arr[j] < arr[min_idx])
                {
                    min_idx = j;
                }
            }
            int a = 0, b = 9;
            swap(arr[min_idx], arr[i]);
        }
}

void SelectionSort::swap(int& a, int& b)
{
    int temp = 0;
    temp = a;
    a = b;
    b = temp;
}