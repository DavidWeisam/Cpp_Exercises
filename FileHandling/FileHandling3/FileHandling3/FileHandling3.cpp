#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ifstream myFile("dudu.txt");
    string line;
    int counter = 0;

    if (myFile.is_open()) {
        while (getline(myFile, line)) {
            counter++;
        }
        myFile.close();
    }

    cout << "There is " << counter << " lines in the file dudu.txt" << endl;

    return 0;
}

