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

    void sortQueue(Queue& q) {
        if (q.isEmpty()) {
            cout << "Error: Queue is empty" << endl;
            return;
        }
        int n = q.rear - q.front + 1; 
        for (int i = 0; i < n - 1; i++) {
            int minIndex = i;
            int minValue = q.arr[q.front + i];
            
            for (int j = i + 1; j < n; j++) {
                if (q.arr[q.front + j] < minValue) {
                    minIndex = j;
                    minValue = q.arr[q.front + j];
                }
            }
            
            for (int j = minIndex; j > i; j--) {
                q.arr[q.front + j] = q.arr[q.front + j - 1];
            }
            q.arr[q.front + i] = minValue; 
        }
    }
};

int main() {
    cout << "Initialize a Queue." << endl;
    Queue q;
    cout << "\nInsert some elements into the queue:" << endl;
    q.enqueue(1);
    q.enqueue(5);
    q.enqueue(3);
    q.enqueue(6);
    q.enqueue(2);
    q.enqueue(0);
    q.display();
    q.sortQueue(q);
    cout << "\nSort the above Queue elements:\n";
    q.display();
    cout << "\nInput two more elements into the queue:" << endl;
    q.enqueue(-1);
    q.enqueue(4);
    q.display();
    q.sortQueue(q);
    cout << "\nSort the above Queue elements:\n";
    q.display();
    return 0;
}
