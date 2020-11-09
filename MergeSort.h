#pragma once
class MergeSort
{
public:
    MergeSort(int* arr, int beg, int end);
private:
    void merge(int* arr, int beg, int mid, int end);
};