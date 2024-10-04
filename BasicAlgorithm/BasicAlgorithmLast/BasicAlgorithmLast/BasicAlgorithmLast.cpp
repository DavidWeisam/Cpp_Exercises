#include <iostream>
#include <vector>
#include <list>

using namespace std;

list<int> func(list<int> inputList) {
	list<int> newList;
	list<int>::iterator iter;

	
	for (iter = inputList.begin(); iter != inputList.end(); iter++) {
		newList.push_back((*iter) % 10);
	}
	return newList;
}

int main(){
	list<int> myList= { 12, 20, 351, 4449 };
	
	list<int> newList = func(myList);

	for (int i : newList) {
		cout << i << ", ";
	}
}

