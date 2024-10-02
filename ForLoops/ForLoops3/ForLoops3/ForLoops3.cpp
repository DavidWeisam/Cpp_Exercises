#include <iostream>
using namespace std;

bool isValidNumber(string str) {

	for (int i = 0; i < str.length(); i++) {
		if (str[i] < 48 || str[i] > 57) {
			return false;
		}
	}
	return true;
}

int main() {
	int terms;
	int sum = 0;

	for (;;) {
		cout << "Enter the terms: ";
		if (cin >> terms) {
			if (terms > 0) {
				break;
			}
		}
		else {
			cout << "Please enter a valid integer" << endl;
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
		}
	}

	cout << "The natural numbers upto " << terms << "th terms are:" << endl;

	for (int i = 1; i <= terms; i++) {
		cout << i << " ";
		sum += i;
	}

	cout << "\nThe sum of the natural numbers is: " << sum;
}
