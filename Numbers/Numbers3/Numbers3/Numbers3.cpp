#include <iostream>
using namespace std;

bool IsAbundant(int num) {
    int sum = 0;
    for (int i = 1; i <= num / 2; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }
    return sum > num;
}

int main() {

    for (int i = 1; i <= 1000; i++) {
        if (IsAbundant(i)) {
            cout << i << " ";
        }
    }
    cout << endl;

    return 0;
}
