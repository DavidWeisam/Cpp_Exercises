#include <iostream>
using namespace std;


int func(int number) {
	int sum = 0;

	while (number != 0) {
		sum += number % 10;
		number = number / 10;
	}
	return sum;
}

int main() {
	cout << "Input: 1234\n" << "Output: " << func(1234) << endl;
	cout << "Input: 8714\n" << "Output: " << func(8714) << endl;
}

