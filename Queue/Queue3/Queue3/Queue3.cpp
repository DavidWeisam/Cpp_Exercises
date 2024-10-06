#include <iostream>
#define MAX_SIZE 5
using namespace std;


class MyQueue {

    int array[MAX_SIZE];
    int index;
public:
    MyQueue() :
        index(-1)
    {}

    void Enqueue(int value) {
        if (IsFull()) {
            cout << "The Queue is full" << endl;
            return;
        }
        index++;
        array[index] = value;
    }

    bool IsEmpty() {
        return index == -1;
    }

    void Dequeue() {
        if (IsEmpty()) {
            cout << "The Queue is empty" << endl;
            return;
        }
        for (int i = 0; i <= index - 1; i++) {
            array[i] = array[i + 1];
        }
        index--;
    }

    bool IsFull() {
        return index == MAX_SIZE - 1;
    }
    void ShowQueue() {
        for (int i = 0; i <= index; i++) {
            cout << array[i] << ", ";
        }
        cout << endl;
    }

    void SortQueue() {
        if (IsEmpty()) {
            cout << "The Queue is empty" << endl;
            return;
        }

        for (int i = 0; i <= index; i++) {
            for (int j = 0; j < index - i; j++) {
                if (array[j] > array[j + 1]) {
        
                    int temp = array[j];
                    array[j] = array[j + 1];
                    array[j + 1] = temp;
                }
            }
        }
    }
};




int main() {
    MyQueue que;
    cout << que.IsEmpty() << endl;

    que.Enqueue(7);
    que.Enqueue(5);
    que.Enqueue(2);
    que.Enqueue(4);
    que.Enqueue(1);

    que.ShowQueue();
    que.SortQueue();
    que.ShowQueue();
    return 0;
}

