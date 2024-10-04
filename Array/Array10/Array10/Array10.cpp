#include <iostream>
using namespace std;


int func(int array[], int len) {
    for (int i = 0; i < len - 1; i++) {
        if ((array[i + 1] - array[i]) > 1) {
            return (array[i] + 1);
        }
    }

    return len;
}



int main() {
    int myArray[] = {0, 1, 2, 3, 5, 6, 7, 8, 10};
    int len = sizeof(myArray) / sizeof(myArray[0]);

    cout << func(myArray, len);

    
}

