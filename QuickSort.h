#pragma once
class QuickSort
{
public:
	QuickSort(int *array, int low, int high);
private:
	void swap(int &a, int &b);
	int partition(int *array, int low, int high);
};


