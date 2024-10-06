#include <iostream>
using namespace std;

int Factorial(int num) {
    if (num == 0 || num == 1) {
        return 1;
    }
    int fact = 1;
    for (int i = 2; i <= num; i++) {
        fact *= i;
    }
    return fact;
}

bool IsStrongNumber(int num) {
    int sum = 0;
    int copyNumber = num;

    while (num > 0) {
        int digit = num % 10;
        sum += Factorial(digit); 
        num /= 10; 
    }

    
    return sum == copyNumber;
}

int main() {
    int num1 = 145;
    int num2 = 24;
    

    cout << IsStrongNumber(num1) << endl;
    cout << IsStrongNumber(num2) << endl;
       

    return 0;
}
