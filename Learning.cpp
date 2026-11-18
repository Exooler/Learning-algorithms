
#include "Learning.h"
using namespace std;
static int findmisssing(int arr[]) {
    int low = arr[0];
    int high = arr[6];
    int diff = low - 0;
    int n = 7;
    for (int i = 0; i < n; ++i) {
        if (arr[i] - i != diff) {
            int missing = i + diff;
            return missing;
        }
    }
}

static vector<int> findRandomMissing(int arr[], int high, int low) {
    unordered_map<int, int> hash;
    vector<int> missing;
    int n = 10;
    for (int i = 0; i < n; ++i) {
        hash[arr[i]]++;
    }
    for (int i = low; i <= high; ++i) {
        if (hash[i] == 0) {
            missing.push_back(i);
        }
    }

    return missing;

}

static vector<int> FindingMoreMissingElements(int arr[]) {
    vector<int> elements;
    int diff = arr[0] - 0;
    int n = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < n; ++i) {
        if (arr[i] - i != diff) {
            while (diff < arr[i] - i) {
                elements.push_back(i + diff);
                diff++;
            }
        }
    }
    return elements;
}


int main() {
    // Write C++ code here
    int arr[] = { 6,7,8,9,10,12,13 };

    int arr2[] = { 4,5,7,8,10,12,13 };
    int arr3[] = { 5,2,4,7,8,1,3,10 };
    int arr4[] = { 1,2,4,5,6,8,9,10,12,15 };

    vector<int> result = findRandomMissing(arr4,15, 1);
    for (int a : result) {
        cout << a << " ";

    }
    return 0;
}