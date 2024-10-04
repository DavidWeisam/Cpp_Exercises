#include <iostream>
#include <string>
using namespace std;

string func(string inputString) {
	string newString = inputString;

	int len = inputString.length();

	for (int i = 0; i < len; i++) {
        newString[i] = inputString[len - i - 1];
    }
    return newString;
}


int main() {
	string str1 = "david";
	string str2 = "w3resource";

	cout << "Sample Input: " << str1 << "\nSample Output: " << func(str1) << endl;
	cout << "Sample Input: " << str2 << "\nSample Output: " << func(str2) << endl;
	
}

