#include <iostream>
using namespace std;

struct Node {
	int data;
	Node* next;
};


class LinkedList {
	Node* head;
	public:	
		LinkedList() :
			head(NULL)
		{}

		void insertNode(int data) {
			Node* newNode = new Node();
			newNode->data = data;
			newNode->next = NULL;
		
			if (!head) {
				head = newNode;
				return;
			}

			Node* temp = head;
			while (temp->next) {
				temp = temp->next;
			}
			temp->next = newNode;
		}

		void showList() {
			if (!head) {
				cout << "The list is empty";
				return;
			}
			else {
				Node* temp = head;
				while (temp->next) {
					cout << temp->data << ", ";
					temp = temp->next;
				}
				cout << temp->data << ", ";
			}
	
		}
};


int main() {
	LinkedList myList;

	myList.insertNode(1);
	myList.insertNode(6);
	myList.insertNode(64);
	myList.insertNode(23);
	myList.insertNode(56);
	myList.insertNode(12);
	myList.showList();
}

