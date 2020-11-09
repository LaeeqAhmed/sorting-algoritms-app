#pragma once
class CountSort
{
public:
    CountSort(int* array, int size);
private:
    int getMax(int* array, int size);
};