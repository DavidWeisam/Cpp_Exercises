#include <iostream>
#include <string>
#include <cmath>

using namespace std;

bool isLeapYear(int year) {
	return (year % 400 == 0 || (year % 100 != 0 && year % 4 == 0));
}

void func(string date1, string date2) {

	int days = 0;
	int daysInMonth[] = { 0, 31, 59, 90, 120, 151, 181, 212, 243, 273, 304, 334, 365 };

	int year1 = stoi(date1.substr(0, 4));
	int year2 = stoi(date2.substr(0, 4));

	days += abs(year1 - year2) * 365;

	int month1 = stoi(date1.substr(5, 2));
	int month2 = stoi(date2.substr(5, 2));

	int dayOfYear1 = daysInMonth[month1 - 1] + stoi(date1.substr(8, 2));
	int dayOfYear2 = daysInMonth[month2 - 1] + stoi(date2.substr(8, 2));

	if (isLeapYear(year1) && month1 > 2) {
		dayOfYear1++; 
	}
	if (isLeapYear(year2) && month2 > 2) {
		dayOfYear2++; 
	}

	days += abs(dayOfYear1 - dayOfYear2);

	int leapDays = (abs(year1 - year2)) / 4;
	days += leapDays;

	cout << "Final days difference: " << days << endl;
}

int main() {
	func("2000/01/31", "2019/02/01");
	return 0;
}
