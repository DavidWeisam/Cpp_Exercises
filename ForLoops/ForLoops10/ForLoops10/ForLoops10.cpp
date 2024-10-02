#include <iostream>
using namespace std;

bool isValidNumber(string str) {

	for (int i = 0; i < str.length(); i++) {
		if (str[i] < 48 || str[i] > 57) {
			return false;
		}
	}
	return true;
}

int main() {
	string intput_number;
	int sum = 0;

	for (;;) {
		cout << "Enter a number: ";
		cin >> intput_number;
		if (isValidNumber(intput_number)) {
			break;
		}
		cout << "Enter a valid namuber." << endl;

	}

	cout << "Input a number: " << intput_number << endl;

	for (int i = 0; i < intput_number.length(); i++) {
		sum += (intput_number[i] - '0');
	}

	cout << "The sum of digits of " << intput_number << " is: " << sum;
}

