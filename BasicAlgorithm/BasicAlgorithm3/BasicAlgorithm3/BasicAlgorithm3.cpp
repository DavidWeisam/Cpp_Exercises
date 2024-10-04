#include <iostream>
using namespace std;


bool func(int x, int y) {
	return (x == 30 || y == 30 || (x + y) == 30);
}


int main() {
	cout << func(5, 25) << endl;
	cout << func(30, 30) << endl;
	cout << func(2, 5) << endl;
}

