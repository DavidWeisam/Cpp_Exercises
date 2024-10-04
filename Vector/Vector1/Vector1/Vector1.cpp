#include <iostream>
#include <vector>
#include<algorithm>

using namespace std;


bool IsConsecutiveList(vector<int> list) {

	sort(list.begin(), list.end());
	vector<int>::iterator iter;

	for (iter = list.begin(); iter != list.end() - 1; iter++) {
		if ((*iter + 1) != *(iter + 1)) {
			return false;
		}
	}
	return true;
}

int main() {
	vector<int> list = { 1, 2, 5, 4, 3, 6, 7 };
	cout << IsConsecutiveList(list);
}

