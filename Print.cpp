#include "Print.h"
#include <iostream>


Print::Print(int* arr, size_t size)
{
	for (int index = 0; index < size; index++)
	{
		std::cout << arr[index] << std::endl;
	}
	std::cout << "\n";
}