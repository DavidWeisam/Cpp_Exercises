#include <iostream>
using namespace std;

int main() {
	string input_string;
	bool isPalindrome = true;


	cout << "Enter a string: ";
	cin >> input_string;

	int len = input_string.length();
	int half = len / 2;

	for (int i = 0; i < half; i++) {
		if (input_string[i] != input_string[len - i - 1]) {
			isPalindrome = false;
			break;
		}
	}

	if (isPalindrome) {
		cout << "True";
	}
	else {
		cout << "False";
	}
}

