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

    int find_minimum(Queue q) {
        int min = q.peek();
        while (!q.isEmpty()) {
            int curr = q.peek(); 
            if (curr < min) {
                min = curr; 
            }
            q.dequeue(); 
        }
        return min; 
    }
};

int main() {
    cout << "Initialize a Queue." << endl;
    Queue q;
    cout << "\nInsert some elements into the queue:" << endl;
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.enqueue(4);
    q.enqueue(5);
    q.display();
    int min = q.find_minimum(q);
    cout << "Minimum element of the said queue: " << min << endl;
    cout << "\nInsert two more elements into the queue:" << endl;
    q.enqueue(-6);
    q.enqueue(0);
    q.display();
    min = q.find_minimum(q); 
    cout << "Minimum element of the said queue: " << min << endl;
    return 0;
}
