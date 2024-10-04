#include <iostream>
#include <string>

using namespace std;

int main() {
    int row = 3; 
    int col = 4;

    string** stringArray = new string* [row];
    float** floatArray = new float* [row];

    
    for (int i = 0; i < row; i++) {
        stringArray[i] = new string[col];
    }

    for (int i = 0; i < row; i++) {
        floatArray[i] = new float[col];
    }
    

    string value1 = "david";
    float value2 = float(3.33);


    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            stringArray[i][j] = value1;
        }
    }

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            floatArray[i][j] = value2;
        }
    }
    
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cout << stringArray[i][j] << ", ";
        }
        cout << endl;
    }

    cout << endl;

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cout << floatArray[i][j] << ", ";
        }
        cout << endl;
    }



    for (int i = 0; i < row; i++) {
        delete[] stringArray[i];
        delete[] floatArray[i];
    }

    delete[] stringArray;
    delete[] floatArray;

    return 0;

}

