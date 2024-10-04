#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> CreateMatrix(int n) {
    vector<int> row(n);
    vector<vector<int>> matrix(n);

    vector<int>::iterator iter1;
    vector<vector<int>>::iterator iter2;

    for (iter1 = row.begin(); iter1 != row.end(); iter1++) {
        *iter1 = n;
    }

    for (iter2 = matrix.begin(); iter2 != matrix.end(); iter2++) {
        *iter2 = row;
    }

    return matrix;
}


int main() {
    int n = 5;
    vector<vector<int>> matrix = CreateMatrix(n);

    vector<vector<int>>::iterator iter1;
    vector<int>::iterator iter2;
    
    for (iter1 = matrix.begin(); iter1 != matrix.end(); iter1++) {
        for (iter2 = (*iter1).begin(); iter2 != (*iter1).end(); iter2++) {
            cout << (*iter2) << " ";
        }
        cout << endl;
    }
}

