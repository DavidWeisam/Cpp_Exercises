#include <iostream>
using namespace std;

void CheckIntegerInput(int& num, string srt = "") {

	for (;;) {
		cout << srt << endl;
		if (cin >> num) {
			break;
		}
		else {
			cout << "Please enter a valid integer" << endl;
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
		}
	}
}

int main(){
	int num;

	for (;;) {
		CheckIntegerInput(num, "Enter a positive number: ");
		if (num > 0) {
			break;
		}
	}

	if (num % 3 == 0 || num % 7 == 0) {
		cout << true << endl;
	}
	else {
		cout << false << endl;
	}
}
