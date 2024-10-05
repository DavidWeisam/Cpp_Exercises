#include <iostream>
using namespace std;

int ReverseDigits(int num) {
    int newNum = 0;

    while (num != 0) {
        newNum *= 10;
        newNum += num % 10;
        num = num / 10;
    }

    return newNum;
}



int main() {
    int num1 = 3;
    int num2 = 123;

    cout << ReverseDigits(num1) << endl;
    cout << ReverseDigits(num2) << endl;

    return 0;
}

