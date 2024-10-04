#include <iostream>
#include <vector>
using namespace std;


bool ThereIsNumber(string str) {
    for (int i = 0; i < str.length(); i++) {
        if (isdigit(str[i])) {
            return true;
        }
    }
    return false;
}

vector<string> FindStringWithNumbers(vector<string> &list, vector<string> &newList) {
    vector<string>::iterator iter;
    

    for (iter = list.begin(); iter != list.end(); iter++) {
        if (ThereIsNumber(*iter)) {
            newList.push_back(*iter);
        }
    }
    return newList;
}


int main() {
    vector<string> list = { "red", "green23", "1black", "white" };
    
    vector<string> newList;

    FindStringWithNumbers(list, newList);
    
    vector<string>::iterator iter;

    for (iter = newList.begin(); iter != newList.end(); iter++) {
        cout << *iter << ", ";
    }
}
