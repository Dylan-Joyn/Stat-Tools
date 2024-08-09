/*#include "StatTools.h"

long long StatTools::getMax(const long long data[], int size) {
    return *max_element(data, data + size);
}

long long StatTools::getMin(const long long data[], int size) {
    return *min_element(data, data + size);
}

double StatTools::getMean(const long long data[], int size) {
    long long sum = 0;
    for (int i = 0; i < size; ++i) {
        sum += data[i];
    }
    return static_cast<double>(sum) / size;
}

long long StatTools::getMode(const long long data[], int size) {
    unordered_map<long long, int> frequency;
    for (int i = 0; i < size; ++i) {
        frequency[data[i]]++;
    }

    long long mode = data[0];
    int maxCount = 0;
    for (const auto& pair : frequency) {
        if (pair.second > maxCount) {
            maxCount = pair.second;
            mode = pair.first;
        }
    }
    return mode;
}

double StatTools::getMedian(long long data[], int size) {
    sort(data, data + size);
    if (size % 2 == 0) {
        return (data[size / 2 - 1] + data[size / 2]) / 2.0;
    }
    else {
        return data[size / 2];
    }
}
*/