#include <iostream>
using namespace std;
 
bool func(int x) {
	return (x % 3 == 0 || x % 7 == 0);
}


int main(){
	cout << func(3) << endl;
	cout << func(14) << endl;
	cout << func(12) << endl;
	cout << func(37) << endl;
}
