#include <iostream>
#include <string>
#include <vector>
#include <cstdlib> 
using namespace std;

const int MAX_VALID_YR = 9999;
const int MIN_VALID_YR = 1000;

const int monthDays[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

vector<int> GetDate(const string& date) {
    if (date.length() != 10 || date[4] != '/' || date[7] != '/') {
        return {};
    }

    vector<int> result(3);

    for (int i = 0; i < 4; i++) {
        if (!isdigit(date[i])) {
            return {};
        }
    }
    for (int i = 5; i < 7; i++) {
        if (!isdigit(date[i])) {
            return {};
        }
    }
    for (int i = 8; i < 10; i++) {
        if (!isdigit(date[i])) {
            return {};
        }
    }

    result[0] = stoi(date.substr(0, 4)); 
    result[1] = stoi(date.substr(5, 2)); 
    result[2] = stoi(date.substr(8, 2)); 

    return result;
}


bool isLeap(int year) {
    return (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0));
}


bool isValidDate(int y, int m, int d) {
    if (y > MAX_VALID_YR || y < MIN_VALID_YR) {
        return false;
    }
        
    if (m < 1 || m > 12) {
        return false;
    }
    
    if (d < 1 || d > 31) {
        return false;
    }

    if (m == 2) {
        if (isLeap(y)) {
            return (d <= 29);
        } 
        else {
            return (d <= 28);
        }
    }

    if (m == 4 || m == 6 || m == 9 || m == 11) {
        return (d <= 30);
    }

    return true;
}

int countLeapYearDays(int date[]) {
    int years = date[0];  
    if (date[1] <= 2) {
        years--;
    }
    return ((years / 4) - (years / 100) + (years / 400));
}

int countNoOfDays(int date1[], int date2[]) {
    long int dayCount1 = date1[0] * 365;  

    for (int i = 0; i < date1[1] - 1; ++i) {
        dayCount1 += monthDays[i];
    }

    dayCount1 += date1[2];  
    dayCount1 += countLeapYearDays(date1);  

    long int dayCount2 = date2[0] * 365;
    
    for (int i = 0; i < date2[1] - 1; ++i) {
        dayCount2 += monthDays[i];
    }
    
    dayCount2 += date2[2];
    dayCount2 += countLeapYearDays(date2);

    return abs(dayCount1 - dayCount2);
}

bool GetInput(string& date) {
    cout << "Enter a date (YYYY/MM/DD): ";
    cin >> date;


    if (date.length() != 10 || date[4] != '/' || date[7] != '/') {
        cout << "Invalid date format. Please enter in YYYY/MM/DD format." << endl;
        return false;
    }

    vector<int> parsedDate = GetDate(date);
    if (parsedDate.empty()) {
        cout << "Invalid characters in the date. Please enter digits for year, month, and day." << endl;
        return false;
    }

    if (!isValidDate(parsedDate[0], parsedDate[1], parsedDate[2])) {
        cout << "Invalid date values. Please enter a valid date." << endl;
        return false;
    }

    return true;
}

int main() {
    string first_date;
    string second_date;

    while (!GetInput(first_date)) {
        cout << "Please enter the first date again." << endl;
    }

    while (!GetInput(second_date)) {
        cout << "Please enter the second date again." << endl;
    }

    vector<int> date1 = GetDate(first_date);
    vector<int> date2 = GetDate(second_date);

    int daysBetween = countNoOfDays(date1.data(), date2.data());
    cout << "The number of days between the two dates is " << daysBetween << endl;

    return 0;
}
