#include <iostream>
using namespace std;

int findSum(int array[], int sum, int index) {
    if (index == 0) {
        sum += array[index];
        return sum;
    }

    sum += array[index];
    index--;
    findSum(array, sum, index);
}


int main() {
    int array[] = { 3, 1, 4, 55, 34 };
    int len = sizeof(array) / sizeof(array[0]);
    int sum = 0;
    cout << findSum(array, sum, len - 1);
}

