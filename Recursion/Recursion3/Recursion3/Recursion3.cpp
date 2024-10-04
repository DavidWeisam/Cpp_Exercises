#include <iostream>
using namespace std;


int findFibonachNumbaer(int index, int firstNumber, int secondNumber) {
    if (index == 0) {
        return firstNumber;
    }

    index--;
    int temp = firstNumber;
    firstNumber = firstNumber + secondNumber;
    secondNumber = temp;

    findFibonachNumbaer(index, firstNumber, secondNumber);
}



int main() {
    int n = 19;

    cout << findFibonachNumbaer(n - 1, 1, 0);
}

