#include <iostream>
using namespace std;



bool isPrimeNum(int num, int devisor) {
	if (devisor > (num / 2)) {
		return true;
	}

	if (num % devisor == 0) {
		return false;
	}
	devisor++;

	return isPrimeNum(num, devisor);

}

int sumOfPrimeNumbers(int start, int end, int sum) {
	if (start > end) {
		return sum;
	}

	if (start != 1 && isPrimeNum(start, 2)) {
		sum += start;
	}

	start++;

	sumOfPrimeNumbers(start, end, sum);
}




int main() {
	cout << sumOfPrimeNumbers(5, 20, 0);
}

