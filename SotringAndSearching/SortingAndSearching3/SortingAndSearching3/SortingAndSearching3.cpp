#include <iostream>
#include <vector>
#include <algorithm>
#include <random>   
#include <chrono>   

using namespace std;


bool IsSorted(const vector<int>& arr) {
    for (size_t i = 1; i < arr.size(); ++i) {
        if (arr[i - 1] > arr[i])
            return false;
    }
    return true;
}


void BogoSort(vector<int>& arr) {

    unsigned seed = chrono::system_clock::now().time_since_epoch().count();

    while (!IsSorted(arr)) {
        shuffle(arr.begin(), arr.end(), default_random_engine(seed));
        seed++;
    }
}

int main() {

    vector<int> arr = { 3, 2, 5, 1, 4 };

    cout << "Original array: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;


    BogoSort(arr);

    cout << "Sorted array: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
