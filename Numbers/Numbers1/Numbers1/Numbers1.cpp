#include <iostream>
using namespace std;

int Dividedby(int num, int divisor) {
    while (num % divisor == 0) {
        num /= divisor;
    }
    return num;
}

bool IsUglyNumber(int num) {
    if (num <= 0) {
        return false; 
    }

    num = Dividedby(num, 2);
    num = Dividedby(num, 3);
    num = Dividedby(num, 5);

    return num == 1;
}

int main() {
    int num1 = 6;
    int num2 = 14;
    int num3 = 11;

    cout << IsUglyNumber(num1) << endl;
    cout << IsUglyNumber(num2) << endl;
    cout << IsUglyNumber(num3) << endl;

    return 0;
}
