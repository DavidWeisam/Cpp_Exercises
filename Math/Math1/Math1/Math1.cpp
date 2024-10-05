#include <iostream>
using namespace std;

bool IsPowerOf2(int num) {

    int result = 2;

    while (num >= result) {
        if (num == result) {
            return true;
        }
        result *= 2;
    }
    return false;
}





int main() {
    int num1 = 8; 
    int num2 = 256;
    int num3 = 124;

    cout << IsPowerOf2(num1) << endl;
    cout << IsPowerOf2(num2) << endl;
    cout << IsPowerOf2(num3) << endl;

    return 0;
}

