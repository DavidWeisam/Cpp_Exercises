#include <iostream>
#include <vector>
using namespace std;

string moveDigit(string str) {
    string new_str = "";
    new_str += str[str.length() - 1];

    for (int i = 0; i < str.length() - 1; i++) {
        new_str += str[i];
    }

    return new_str;

}

string swapDigit(string str) {
    string new_str = "";

    new_str += str[str.length() - 1];

    for (int i = 1; i < str.length() - 1; i++) {
        new_str += str[i];
    }
    new_str += str[0];
    
    return new_str;

}

int func(string list) {

    string new_list;
    int num;
    int conter = 0;
    for (int i = 0; i < list.length(); i++) {
        new_list = "";
        for (int j = 0; j < 3; j++) {
            num = i + j;
            if (num >= list.length()) {
                num = num - list.length();
            }
            new_list += list[num];
        }
        cout << "\n";
        for (int i = 0; i < 3; i++) {
            cout << new_list << endl;
            cout << swapDigit(new_list) << endl;
            new_list = moveDigit(new_list);
            conter += 2;
        }

    }

    return conter;

}


int main(){
    
    string list = "1234";
    
    cout << "Total number of the three-digit-number is:" << func(list);
}




