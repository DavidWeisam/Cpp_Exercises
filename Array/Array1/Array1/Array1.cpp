#include <iostream>
using namespace std;


int func(int array[], int len) {
    int max = array[0];

    for (int i = 1; i < len; i++) {
        if (array[i] > max) {
            max = array[i];
        }
    }
    return max;
}


int main() {
    int myArray[] = { 10, 20, 98, 30, 23, 45, 1};
    int len = sizeof(myArray) / sizeof(myArray[0]);

    cout << func(myArray, len);
}

