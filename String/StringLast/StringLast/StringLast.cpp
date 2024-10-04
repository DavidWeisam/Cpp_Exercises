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


string func(string inputString) {
	string newString = inputString;

	makeLower(inputString);

	for (int i = 0; i < inputString.length(); i++) {

		if ((i % 2 != 0) && isChar(inputString[i])) {
			newString[i] = inputString[i] - 32;
			continue;
		}

		newString[i] = inputString[i];
	}
	return newString;
}


int main() {
	string str1 = "JavaScript";
	string str2 = "Python";

	cout << "Input: " << str1 << "\nOutput: " << func(str1) << endl;
	cout << "Input: " << str2 << "\nOutput: " << func(str2) << endl;
}

