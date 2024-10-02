#include <iostream>

using namespace std;

int main() {
	string input_string;

	cout << "Enter a stirng: ";
	cin >> input_string;

	for (int i = input_string.length(); i >= 0; i--) {
		cout << input_string[i];
	}
}

