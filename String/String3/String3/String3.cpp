#include <iostream>
#include <string>

using namespace std;

string func(string inputString) {
	string newString = inputString;
	bool isSpace = false;

	for (int i = 0; i < inputString.length(); i++) {
		if (isSpace || i == 0) {
			newString[i] = inputString[i] - 32;
			isSpace = false;
			continue;
		}

		if (inputString[i] == ' ') {
			isSpace = true;
		}

		newString[i] = inputString[i];
	}

	return newString;
}



int main() {
	string str1 = "cpp string exercises";
	string str2 = "david the king";
	cout << "Sample Input: " << str1 << "\nSample Output: " << func(str1) << endl;
	cout << "Sample Input: " << str2 << "\nSample Output: " << func(str2) << endl;
}

