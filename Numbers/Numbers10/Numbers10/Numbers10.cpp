#include <iostream>
#include <cmath>
#include <string>
using namespace std;

bool IsKaprekar(int num) {
    if (num == 0 || num == 1) {
        return true;
    }

    long square = (long)num * num;

    string squareStr = to_string(square);
    int len = squareStr.length();

    for (int i = 1; i < len; i++) {
        string leftStr = squareStr.substr(0, i);
        string rightStr = squareStr.substr(i);

        int left = (leftStr.empty()) ? 0 : stoi(leftStr);
        int right = (rightStr.empty()) ? 0 : stoi(rightStr);

        if (left + right == num && right != 0) {
            return true;
        }
    }

    return false;
}

int main() {
    for (int i = 1; i < 1000; i++) {
        if (IsKaprekar(i)) {
            cout << i << " ";
        }
    }
    

    return 0;
}
