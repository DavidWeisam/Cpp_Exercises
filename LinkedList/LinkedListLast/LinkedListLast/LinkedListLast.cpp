#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node* prev;
};

class DoublyLinkedList {

    Node* head;
    int len;
public:
    DoublyLinkedList() :
        head(NULL),
        len(0)
    {}

    void InsertNode(int data) {
        Node* newNode = new Node();
        newNode->data = data;
        newNode->next = NULL;
        newNode->prev = NULL;

        if (!head) { 
            head = newNode;
        }
        else {
            Node* temp = head;
            int middleIndex = len / 2;  
            for (int i = 0; i < middleIndex - 1; ++i) {
                temp = temp->next;  
            }

            
            newNode->next = temp->next;
            newNode->prev = temp;
            if (temp->next != NULL) {  
                temp->next->prev = newNode;
            }
            temp->next = newNode;
        }
        len++;  
    }

    void showList() {
        if (!head) {
            cout << "The list is empty";
            return;
        }
        Node* temp = head;
        while (temp) {
            cout << temp->data;
            if (temp->next) {
                cout << ", ";  
            }
            temp = temp->next;
        }
        cout << endl;
    }
};

int main() {
    DoublyLinkedList list;

    list.InsertNode(5);
    list.showList();
    
    list.InsertNode(1);
    list.showList();
    list.InsertNode(3);
    list.showList();
    list.InsertNode(7);

    list.showList();  // Output should show the list with the new nodes inserted in the middle
    list.InsertNode(5);
    list.showList();
    return 0;
}
