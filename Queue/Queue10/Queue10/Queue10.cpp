#include <iostream>
#define MAX_SIZE 100
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

    int GetMinimum() {
        if (IsEmpty()) {
            cout << "The Queue is empty" << endl;
            return -1;
        }

        int min = array[0];

        for (int i = 1; i <= index; i++) {
            if (array[i] < min) {
                min = array[i];
            }
        }
        return min;
    }



    
};




int main() {
    MyQueue q1;
    MyQueue q2;
    MyQueue q3;

    q1.Enqueue(1);
    q1.Enqueue(2);
    q1.Enqueue(3);
    q1.Enqueue(78);
    q1.Enqueue(2);
    q1.Enqueue(55);
    q1.Enqueue(5);
    q1.ShowQueue();
    cout << q1.GetMinimum();

  
    return 0;
}

