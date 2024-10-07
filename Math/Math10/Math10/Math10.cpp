#include <iostream>
using namespace std;

int count_DigitOne(int num) {
    int m = 0, k = 0, result = 0, base = 1; 

    
    while (num > 0) {
        k = num % 10; 
        num = num / 10;

        if (k > 1) {
            result += (num + 1) * base;
        }
        else if (k < 1) {
            result += num * base;
        }
        else {
            result += num * base + m + 1;
        }

        m += k * base; 
        base *= 10; 
    }
    return result; 
}

int main(void) {
    
    int n = 6;
    cout << "\nTotal number of digit 1 appearing in " << n << " (less than or equal) is " << count_DigitOne(n) << endl;

    n = 15;
    cout << "\nTotal number of digit 1 appearing in " << n << " (less than or equal) is " << count_DigitOne(n) << endl;

    n = 100;
    cout << "\nTotal number of digit 1 appearing in " << n << " (less than or equal) is " << count_DigitOne(n) << endl;

    return 0; 
}
