#include <iostream>
using namespace std;


int CountOnesIn(int num) {
    int counter = 0;
    while (num != 0) {
        if (num % 10 == 1) {
            counter++;
        }
        num = num / 10;
    }
    return counter;
}

int CountTotalOfOne(int num) {
    int counter = 0;

    for (int i = 1; i <= num; i++) {
        counter += CountOnesIn(i);
    }
    return counter;
}


int main() {
    int num1 = 12;
    int num2 = 20;

    cout << CountTotalOfOne(num1) << endl;
    cout << CountTotalOfOne(num2) << endl;

    return 0;
}
