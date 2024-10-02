#include <iostream>
using namespace std;

int main(){
	int year;

	for (;;) {
		cout << "Enter an year: ";
		if (cin >> year) {
			if (year > 999 && year < 9999) {
				break;
			}
			cout << "Enter an year with four digits." << endl;
		}
		else {
			cout << "Please enter a valid integer" << endl;
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
		}
	}

	cout << "Year: " << year << ", ";

	if (year % 100 == 0) {
		cout << "Century of the year: " << (year / 100);
	}
	else {
		cout << "Century of the year: " << (year / 100) + 1;
	}


}
