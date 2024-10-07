#include <iostream>

using namespace std;

const int MAX_SIZE = 100;

class Queue {
private:
    int front;
    int rear;
    int arr[MAX_SIZE];

public:
    Queue() {
        front = -1;
        rear = -1;
    }

    bool isFull() {
        return (rear == MAX_SIZE - 1);
    }

    bool isEmpty() {
        return (front == -1 && rear == -1);
    }

    void enqueue(int x) {
        if (isFull()) {
            cout << "Error: Queue is full" << endl;
            return;
        }
        if (isEmpty()) {
            front = 0;
            rear = 0;
        }
        else {
            rear++;
        }
        arr[rear] = x;
    }

    void dequeue() {
        if (isEmpty()) {
            cout << "Error: Queue is empty" << endl;
            return;
        }
        if (front == rear) {
            front = -1;
            rear = -1;
        }
        else {
            front++;
        }
    }

    int peek() {
        if (isEmpty()) {
            cout << "Error: Queue is empty" << endl;
            return -1;
        }
        return arr[front];
    }

    void display() {
        if (isEmpty()) {
            cout << "Error: Queue is empty" << endl;
            return;
        }
        cout << "Queue elements are: ";
        for (int i = front; i <= rear; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    Queue find_Union(Queue q1, Queue q2) {
        Queue result; 

        
        while (!q1.isEmpty()) {
            result.enqueue(q1.peek());
            q1.dequeue();
        }

        
        while (!q2.isEmpty()) {
            int element = q2.peek();
            q2.dequeue();

            bool found = false;

        
            for (int i = result.front; i <= result.rear; i++) {
                if (result.arr[i] == element) {
                    found = true;
                    break;
                }
            }

        
            if (!found) {
                result.enqueue(element);
            }
        }

        return result; 
    }
};

int main() {
    cout << "Initialize three Queues." << endl;
    Queue q1, q2, q3; 
    q1.enqueue(1);
    q1.enqueue(2);
    q1.enqueue(3);
    q2.enqueue(1);
    q2.enqueue(2);
    q2.enqueue(4);
    q3.enqueue(3);
    q3.enqueue(2);
    q3.enqueue(1);
    cout << "Queue-1" << endl;
    q1.display(); 
    cout << "Queue-2" << endl;
    q2.display(); 
    cout << "Queue-3" << endl;
    q3.display(); 
    cout << "\nUnion of two queues q1 and q2:" << endl;
    Queue result = q1.find_Union(q1, q2); 
    result.display(); 
    cout << "\nUnion of two queues q2 and q3:" << endl;
    Queue result1 = q1.find_Union(q2, q3);
    result1.display(); 
    cout << "\nUnion of two queues q3 and q1:" << endl;
    Queue result2 = q1.find_Union(q3, q1); 
    result2.display(); 
    return 0;
}
