#include <iostream>
using namespace std;


int func(int year) {
	return year % 100 == 0 ? (year / 100) : (year / 100) + 1;
}


int main(){
	int year1 = 1900;
	int year2 = 1999;
	int year3 = 2000;
	int year4 = 2010;
	int year5 = 2020;

	cout << "Century of the year: " << func(year1) << endl;
	cout << "Century of the year: " << func(year2) << endl;
	cout << "Century of the year: " << func(year3) << endl;
	cout << "Century of the year: " << func(year4) << endl;
	cout << "Century of the year: " << func(year5) << endl;


}
