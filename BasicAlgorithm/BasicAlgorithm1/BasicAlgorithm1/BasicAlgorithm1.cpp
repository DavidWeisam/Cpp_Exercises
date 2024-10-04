#include <iostream>
using namespace std;

int func1(int x, int y) {
	return x == y ? (x + y) * 3 : x + y;
}

int main(){
	cout << func1(4, 4) << endl;
	cout << func1(2, 5) << endl;
	cout << func1(6, 1) << endl;
}
