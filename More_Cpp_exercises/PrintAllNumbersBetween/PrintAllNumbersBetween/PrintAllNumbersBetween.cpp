#include <iostream>
using namespace std;


void addOne(string& number) {
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

}

bool isSame(string str1, string str2) {
    if (str1.length() != str2.length()) {
        return false;
    }

    for (int i = 0; i < str1.length(); i++) {
        if (str1[i] != str2[i]) {
            return false;
        }
    }
    
    return true;
}


void PrintAllNumber(string number) {
    string checker = "1";

    while (!isSame(number, checker)) {
        cout << checker << ", ";
        addOne(checker);
    }
    cout << checker << endl;
}




int main() {
	string inputNumber;

	cout << "Enter a number: ";
	cin >> inputNumber;

    PrintAllNumber(inputNumber);

    return 0;
}

