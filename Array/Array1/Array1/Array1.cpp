#include <iostream>
using namespace std;

int main() {
    int myArray[] = { 10, 20, 98, 30, 23, 45, 1};

    int max = myArray[0];

    int len = sizeof(myArray) / sizeof(myArray[0]);

    for (int i = 1; i < len; i++) {
        if (myArray[i] > max) {
            max = myArray[i];
        }
    }

    cout << max;
}

