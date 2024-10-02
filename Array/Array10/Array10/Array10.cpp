#include <iostream>
using namespace std;

int main() {
    int myArray[] = {0, 1, 2, 3, 5, 6, 7, 8, 10};
    int len = sizeof(myArray) / sizeof(myArray[0]);

    bool found = false;

    for (int i = 0; i < len - 1; i++) {
        if ((myArray[i + 1] - myArray[i]) > 1) {
            cout << myArray[i] + 1;
            found = true;
            break;
        }
    }
    
    if (!found) {
        cout << len;
    }

    return 0;
}

