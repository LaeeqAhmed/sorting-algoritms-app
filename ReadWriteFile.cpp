#include "ReadWriteFile.h"
#include <fstream>
#include <string>
#include <iostream>

using namespace std;

int* ReadWriteFile::readRollNumbers(int &sizeOfArray)
{
    int *arr = NULL;
    ifstream fd("rollno.csv");
    if (fd.is_open())
    {
        string data;
        int count = 0;
        while (fd >> data)
        {
            data.erase(0, 4);
            count++;
        }
        sizeOfArray = count;
        fd.close();

        ifstream fd1("rollno.csv");
        if (fd1.is_open())
        {
            arr = new int[count];
            for (int i = 0; i < count; i++)
            {
                fd1 >> data;
                data.erase(0, 4);
                arr[i] = stoi(data);
            }
            fd1.close();
        }
    }
	return arr;
}

void ReadWriteFile::writeRollNumbers(int *arr, int size)
{
    ofstream ofile("sortedRollNumbers.csv");
    if (ofile.is_open())
    {
        for (int i = 0; i < size; i++)
        {
            ofile << arr[i] << "\n";
        }
        ofile.close();
    }
}