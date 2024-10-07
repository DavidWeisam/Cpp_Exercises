#include <iostream> 
using namespace std;

string addOne(string number) {
    int len = number.length();
    int num = 1;

    for (int i = len - 1; i >= 0; i--) {
        int digit = number[i] - '0' + num;

        num = digit / 10;
        number[i] = (digit % 10) + '0';
        
        if (num == 0) {
            break;
        }
    }

    if (num == 1) {
        number.insert(number.begin(), '1');
    }

    return number;
}





int main() {
    string inputNumber;

    cout << "Enter a number: ";
    cin >> inputNumber;
    cout << inputNumber << " + " << 1 << " = " << addOne(inputNumber) << endl;
  
    return 0;
}
