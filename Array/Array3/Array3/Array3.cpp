#include <iostream>
using namespace std;

int FindMax(int array[], int len) {
    int max = array[0];
    for (int i = 1; i < len; i++) {
        if (array[i] > max) {
            max = array[i];
        }
    }
    return max;
}

int main() {
    int myArray[] = { 10 ,20 ,94, 2, 42, 9 };

    int len = sizeof(myArray) / sizeof(myArray[0]);

    int first_max = FindMax(myArray, len);
    
    int* targetPtr = find(&myArray[0], myArray + len, first_max);

    int targetIndex = targetPtr - myArray;

    myArray[targetIndex] = 0;

    cout << FindMax(myArray, len);

}

