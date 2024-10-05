#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;


void splitFile(string fileName, string outPutName, int chunkSize) {
    ifstream myFile(fileName, ios::binary);
    if (myFile.is_open()) {
        myFile.seekg(0, ios::end);
        streampos fileSize = myFile.tellg();
        myFile.seekg(0, ios::beg);

        int numOfChunks = (static_cast<int>(fileSize) + chunkSize - 1) / chunkSize;

        for (int i = 0; i < numOfChunks; i++) {
            ofstream outputFile(outPutName + to_string(i + 1) + ".txt", ios::binary);
                
            if (outputFile.is_open()) {
                vector<char> buffer(chunkSize);

                myFile.read(buffer.data(), chunkSize);

                outputFile.write(buffer.data(), myFile.gcount());

                outputFile.close();
            }
            else {
                cout << "Filed to open outputFile" << endl;
            }
        }
        myFile.close();
    }
    else {
        cout << "Filed to open input file" << endl;
    }
}



int main() {
    
    string fileName = "dudu.txt";
    string outPutName = "part_";
    int chunkSize = 500;
    splitFile(fileName, outPutName, chunkSize);

    return 0;
}

