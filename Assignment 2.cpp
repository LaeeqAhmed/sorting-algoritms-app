#include <iostream>
#include <string>
#include <fstream>
#include <iterator>
#include <chrono>

#include "readWriteFile.h"
#include "Print.h"
#include "BubbleSort.h"
#include "InsertionSort.h"
#include "SelectionSort.h"
#include "QuickSort.h"
#include "HeapSort.h"
#include "MergeSort.h"
#include "CountSort.h"

using namespace std;


int main()
{
    bool run = true;
    while (run) {
        ReadWriteFile file;
        int size = 0;
        int* arr = file.readRollNumbers(size);

        cout << "SORTING TECHNIQUE MENU\n";
        cout << "Select a sorting technique\n";
        cout << "1. Insertion Sort\n";
        cout << "2. Bubble Sort\n";
        cout << "3. Selection Sort\n";
        cout << "4. Merge Sort\n";
        cout << "5. Quick Sort\n";
        cout << "6. Heap Sort\n";
        cout << "7. Count Sort\n";
        cout << "0. EXIT\n";
        int opt = 0;
        cin >> opt;
        if (opt == 1)
        {
            auto start = chrono::high_resolution_clock::now();
            InsertionSort sort1(arr, size);
            auto stop = chrono::high_resolution_clock::now();
            Print print(arr, size);
            auto duration = chrono::duration_cast<chrono::microseconds>(stop - start);
            cout << "Time in mocroseconds: " << duration.count() << endl;
        }

        else if (opt == 2) {
            auto start = chrono::high_resolution_clock::now();
            BubbleSort sort1(arr, size);
            auto stop = chrono::high_resolution_clock::now();
            Print print(arr, size);
            auto duration = chrono::duration_cast<chrono::microseconds>(stop - start);
            cout << "Time in mocroseconds: " << duration.count() << endl;
        }
        else if (opt == 3) {
            auto start = chrono::high_resolution_clock::now();
            SelectionSort sort1(arr, size);
            auto stop = chrono::high_resolution_clock::now();
            Print print(arr, size);
            auto duration = chrono::duration_cast<chrono::microseconds>(stop - start);
            cout << "Time in mocroseconds: " << duration.count() << endl;
        }
        else if (opt == 4) {
            auto start = chrono::high_resolution_clock::now();
            MergeSort sort1(arr,0, size-1);
            auto stop = chrono::high_resolution_clock::now();
            Print print(arr, size);
            auto duration = chrono::duration_cast<chrono::microseconds>(stop - start);
            cout << "Time in mocroseconds: " << duration.count() << endl;
        }
        else if (opt == 5) {
            auto start = chrono::high_resolution_clock::now();
            QuickSort sort1(arr,0, size-1);
            auto stop = chrono::high_resolution_clock::now();
            Print print(arr, size);
            auto duration = chrono::duration_cast<chrono::microseconds>(stop - start);
            cout << "Time in mocroseconds: " << duration.count() << endl;
        }
        else if (opt == 6) {
            auto start = chrono::high_resolution_clock::now();
            HeapSort sort1(arr, size);
            auto stop = chrono::high_resolution_clock::now();
            Print print(arr, size);
            auto duration = chrono::duration_cast<chrono::microseconds>(stop - start);
            cout << "Time in mocroseconds: " << duration.count() << endl;
        }
        else if (opt == 7) {
            auto start = chrono::high_resolution_clock::now();
            CountSort sort1(arr, size);
            auto stop = chrono::high_resolution_clock::now();
            Print print(arr, size);
            auto duration = chrono::duration_cast<chrono::microseconds>(stop - start);
            cout << "Time in mocroseconds: " << duration.count() << endl;
        }
        else if (opt == 0) {
            run = false;
        }

        file.writeRollNumbers(arr, size);
    }
    return 0;
}