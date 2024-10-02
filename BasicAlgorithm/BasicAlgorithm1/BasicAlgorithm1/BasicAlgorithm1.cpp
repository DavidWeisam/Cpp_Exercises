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
	int first_num;
	int second_num;
	int sum;

	CheckIntegerInput(first_num, "Enter the first integer: ");
	CheckIntegerInput(second_num, "Enter the second integer: ");

	sum = first_num + second_num;

	if (first_num == second_num) {
		cout << sum * 3 << endl;
	}
	else {
		cout << sum << endl;
	}
}
