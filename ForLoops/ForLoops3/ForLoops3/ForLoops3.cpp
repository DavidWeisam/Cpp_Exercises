#include <iostream>
using namespace std;

void func(int terms) {
	int sum = 0;

	cout << "The natural numbers upto " << terms << "th terms are:" << endl;

	for (int i = 1; i <= terms; i++) {
		cout << i << " ";
		sum += i;
	}

	cout << "\nThe sum of the natural numbers is: " << sum;
}


int main() {
	func(7);
	cout << endl;
	func(3);
}
