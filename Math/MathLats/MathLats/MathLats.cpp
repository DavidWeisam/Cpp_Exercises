#include <iostream>
#include <cmath>
using namespace std;


bool isPrime(int num) {
    double root = sqrt(num);
    int devisor = 2;

    while (devisor <= root) {
        if (num % devisor == 0) {
            return false;
        }
        devisor++;
    }
    return true;
}




int main() {

    int num = 200;
    int counter = 0;
    if (num > 2) {
        cout << 2 << ", ";
        counter = 1;
    }

    for (int i = 3; i <= num; i += 2) {
        if (isPrime(i)) {
            cout << i << ", ";
            counter++;
        }
    }
    cout << "\n" << counter << endl;

    return 0;
}

