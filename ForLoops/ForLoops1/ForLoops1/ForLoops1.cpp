#include <iostream>
using namespace std;

void func() {
	cout << "The natural numbers are: " << endl;

	for (int i = 1; i <= 10; i++) {
		cout << i << " ";
	}
}


int main() {
	func();
}

