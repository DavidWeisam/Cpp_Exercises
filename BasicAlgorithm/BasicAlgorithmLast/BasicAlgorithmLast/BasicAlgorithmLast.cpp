#include <iostream>
#include <vector>

using namespace std;

int main(){
	vector<int> list = { 12, 20, 351, 4449, 45, 22 };
	vector<int> newList;
	vector<int>::const_iterator num;

	int counter = 0;

	for (num = list.begin(); num != list.end(); num++) {
		newList.push_back((*num) % 10);
	}

	for (num = newList.begin(); num != newList.end(); num++) {
		cout << *num << endl;
	}
}

