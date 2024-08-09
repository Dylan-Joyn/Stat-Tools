#pragma once
#ifndef STATTOOLS_H
#define STATTOOLS_H

#include <algorithm>
#include <unordered_map>
#include <cmath>
#include <vector>

using namespace std;

template <typename T>
class StatTools {
public:
    static T getMax(const T data[], int size);
    static T getMin(const T data[], int size);
    static double getMean(const T data[], int size);
    static T getMode(const T data[], int size);
    static double getMedian(T data[], int size);
};

template <typename T>
T StatTools<T>::getMax(const T data[], int size) {
    return *max_element(data, data + size);
}

template <typename T>
T StatTools<T>::getMin(const T data[], int size) {
    return *min_element(data, data + size);
}

template <typename T>
double StatTools<T>::getMean(const T data[], int size) {
    T sum = 0;
    for (int i = 0; i < size; ++i) {
        sum += data[i];
    }
    return static_cast<double>(sum) / size;
}

template <typename T>
T StatTools<T>::getMode(const T data[], int size) {
    unordered_map<T, int> frequency;
    for (int i = 0; i < size; ++i) {
        frequency[data[i]]++;
    }

    T mode = data[0];
    int maxCount = 0;
    for (const auto& pair : frequency) {
        if (pair.second > maxCount) {
            maxCount = pair.second;
            mode = pair.first;
        }
    }
    return mode;
}

template <typename T>
double StatTools<T>::getMedian(T data[], int size) {
    sort(data, data + size);
    if (size % 2 == 0) {
        return (data[size / 2 - 1] + data[size / 2]) / 2.0;
    }
    else {
        return data[size / 2];
    }
}

#endif


