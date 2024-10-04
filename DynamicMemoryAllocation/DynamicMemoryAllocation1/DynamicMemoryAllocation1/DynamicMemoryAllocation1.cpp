#include <iostream>
using namespace std;


int main() {
    int* number = new int;
    *number = 3;

    char* character = new char;
    *character = 'd';

    string* myString = new string;
    *myString = "david";

    cout << *number << endl;
    cout << *character << endl;
    cout << *myString << endl;

    delete number;
    delete character;
    delete myString;
}

