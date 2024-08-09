// Stat Tools.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "StatTools.h"

using namespace std;

int main() {
    
    int intData[] = { 85, 36, 54, 43, 23, 54, 89, 98, 100, 20, 26 };
    int intSize = sizeof(intData) / sizeof(intData[0]);

    cout << "Integer Array Statistics:" << endl;
    cout << "Max: " << StatTools<int>::getMax(intData, intSize) << endl;
    cout << "Min: " << StatTools<int>::getMin(intData, intSize) << endl;
    cout << "Mean: " << StatTools<int>::getMean(intData, intSize) << endl;
    cout << "Mode: " << StatTools<int>::getMode(intData, intSize) << endl;
    cout << "Median: " << StatTools<int>::getMedian(intData, intSize) << endl;

    double doubleData[] = { 85.5, 36.1, 54.3, 43.9, 23.7, 54.3, 89.6, 98.4, 100.0, 20.8, 26.2 };
    int doubleSize = sizeof(doubleData) / sizeof(doubleData[0]);

    cout << "\nDouble Array Statistics:" << endl;
    cout << "Max: " << StatTools<double>::getMax(doubleData, doubleSize) << endl;
    cout << "Min: " << StatTools<double>::getMin(doubleData, doubleSize) << endl;
    cout << "Mean: " << StatTools<double>::getMean(doubleData, doubleSize) << endl;
    cout << "Mode: " << StatTools<double>::getMode(doubleData, doubleSize) << endl;
    cout << "Median: " << StatTools<double>::getMedian(doubleData, doubleSize) << endl;

    return 0;
}


