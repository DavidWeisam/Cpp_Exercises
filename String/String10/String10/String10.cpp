#include <iostream>
using namespace std;

bool func(string inputString) {
	int len = inputString.length();
	int half = len / 2;

	for (int i = 0; i < half; i++) {
		if (inputString[i] != inputString[len - i - 1]) {
			return false;
		}
	}
	return true;
}



int main() {
	string str1 = "david";
	string str2 = "madam";
	string str3 = "duud";

	cout << "Sample Input: " << str1 << "\nSmaple Output: " << func(str1) << endl; 
	cout << "Sample Input: " << str2 << "\nSmaple Output: " << func(str2) << endl;
	cout << "Sample Input: " << str3 << "\nSmaple Output: " << func(str3) << endl;
}

