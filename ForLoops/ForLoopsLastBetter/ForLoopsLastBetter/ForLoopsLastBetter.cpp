#include <iostream>
using namespace std;

int main() {
	string str;

	cout << "\n\n Create and display the unique three-digit number using 1, 2, 3, 4:\n";
	cout << "-------------------------------------------------------------------\n";

	cout << " The three-digit numbers are: " << endl;

	int amount = 0;
	cout << " "; 

	for (int i = 1; i <= 4; i++) {
		for (int j = 1; j <= 4; j++) {
			for (int k = 1; k <= 4; k++) {
				if (k != i && k != j && i != j) {
					amount++; 
					cout << i << j << k << " "; 
				}
			}
		}
	}

	
	cout << endl << " Total number of the three-digit numbers is: " << amount << endl << endl;
}
