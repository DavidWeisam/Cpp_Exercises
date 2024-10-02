#include <iostream>
using namespace std;

bool isChar(char ch) {
	return ((ch > 64 && ch < 91) || (ch > 96 && ch < 123));
}

void makeLower(string& str) {
	for (int i = 0; i < str.length(); i++) {
		if (str[i] > 64 && str[i] < 91) {
			str[i] += 32;
		}
	}
}

int main() {
	string input_string;
	string new_string;

	cout << "Enter a string: ";
	cin >> input_string;

	makeLower(input_string);

	for (int i = 0; i < input_string.length(); i++) {

		if ((i % 2 != 0) && isChar(input_string[i])) {
			new_string += input_string[i] - 32;
			continue;
		}

		new_string += input_string[i];
	}

	cout << new_string;
}

