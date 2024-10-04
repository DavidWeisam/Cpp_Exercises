#include <iostream>
using namespace std;

int FindGCD(int firstNum, int secondNum, int devisor, int maxDevisor) {
    if (devisor > firstNum || devisor > secondNum) {
        return maxDevisor;
    }

    if (firstNum % devisor == 0 && secondNum % devisor == 0) {
        if (devisor > maxDevisor) {
            maxDevisor = devisor;
        }
    }

    devisor++;

    FindGCD(firstNum, secondNum, devisor, maxDevisor);
}


int main() {
    int firstNum = 196;
    int secondNum = 8;

    cout << FindGCD(firstNum, secondNum, 1, 1);
}
