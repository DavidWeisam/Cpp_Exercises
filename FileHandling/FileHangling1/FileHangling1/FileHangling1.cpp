#include <iostream>
#include <fstream>
using namespace std;

int main() {
 
	ofstream myFile("test.txt");

	if (myFile.is_open()) {
		myFile << "david the king" << endl;
		myFile << "hi world";

		myFile.close();
	}
	else {
		cout << "Faild to open a file" << endl;
	}
}

