#include <iostream>
#include <string>

using namespace std;

int main() {
	string input_string;
	string new_string;

	bool is_space = false;

	cout << "Enter a string: ";
	getline(cin, input_string);

	for (int i = 0; i < input_string.length(); i++) {
		if (is_space || i == 0) {
			new_string += input_string[i] - 32;
			is_space = false;
			continue;
		}

		if (input_string[i] == ' ') {
			is_space = true;
		}

		new_string += input_string[i];
	}

	cout << new_string;
}

