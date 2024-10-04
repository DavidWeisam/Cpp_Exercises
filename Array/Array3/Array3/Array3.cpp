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

int func(int array[], int len) {

    int first_max = FindMax(array, len);

    int* targetPtr = find(&array[0], array + len, first_max);

    int targetIndex = targetPtr - array;

    array[targetIndex] = 0;

    return FindMax(array, len);


}


int main() {
    int myArray[] = { 10 ,20 ,94, 2, 42, 9 };
    int len = sizeof(myArray) / sizeof(myArray[0]);

    cout << func(myArray, len);
}

