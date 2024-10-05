#include <iostream>
#include<fstream>
using namespace std;

double GetAvarageFromFile(string fileName) {
	ifstream myFile(fileName);
	if (myFile.is_open()) {
		double counter = 0;
		double sum = 0;
		double num;

		while (myFile >> num) {
			sum += num;
			counter++;
		}
		
		myFile.close();
		return sum / counter;
	}
	else {
		cout << "Faild to open the input file" << endl;
	}
	return 0;
}


int main() {
	string fileName = "dudu.txt";
	cout << GetAvarageFromFile(fileName);
	return 0;
}

