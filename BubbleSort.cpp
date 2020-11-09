#include "BubbleSort.h"
#include <iostream>


BubbleSort::BubbleSort(int* unsortedArray, int SIZE)
{
    bool swapped = false;
    for (int start = 0; start < SIZE - 1; start++)
    {
        for (int index = 0; index < SIZE - start - 1; index++)
        {
            if (unsortedArray[index] > unsortedArray[index + 1])
            {
                std::swap(unsortedArray[index], unsortedArray[index + 1]);
                swapped = true;
            }
        }
        if (swapped == false)
        {
            break;
        }
    }
}

BubbleSort::~BubbleSort()
{
}