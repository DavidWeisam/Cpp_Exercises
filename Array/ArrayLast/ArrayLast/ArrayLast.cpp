#include <iostream>
using namespace std;

int FindIndexOfMax(string array[], int len) {
    int max = array[0].length();
    int index_of_max = 0;
    
    for (int i = 1; i < len; i++) {
        if (array[i].length() > max) {
            max = array[i].length();
            index_of_max = i;
        }
    }
    return index_of_max;
}

string func(string array[], int len) {

    int index;

    for (int i = 0; i < 2; i++) {
        index = FindIndexOfMax(array, len);
        array[index] = "";
    }

    index = FindIndexOfMax(array, len);
    return array[index];

}



int main() {
    string myArray[] = { "abcd", "abcd", "abc"};
    int len = sizeof(myArray) / sizeof(myArray[0]);
    
    cout << func(myArray, len);
}

