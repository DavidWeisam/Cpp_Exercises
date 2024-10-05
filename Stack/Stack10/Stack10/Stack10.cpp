#include <iostream>
#define MAX_STACK_SIZE 100
using namespace std;


class MyStack {

    int index;
    int array[MAX_STACK_SIZE];
public:
    MyStack() :
        index(-1)
    {}

    void PushIn(int value) {
        if (index >= MAX_STACK_SIZE) {
            cout << "There is no more space in the stack" << endl;
            return;
        }
        index++;
        array[index] = value;
    }

    void PopFrom() {
        if (IsEmpty()) {
            cout << "The stack is empty" << endl;
            return;
        }
        index--;
    }

    bool IsEmpty() {
        return index == -1;
    }

    void ShowStack() {
        if (IsEmpty()) {
            return;
        }
        for (int i = 0; i <= index; i++) {
            cout << array[i] << ", ";
        }
        cout << endl;
    }

    void RemoveTheLarges() {
        if (IsEmpty()) {
            cout << "The stack is empty" << endl;
            return;
        }

        int max = array[0];
        int indexOfMax = 0;
        for (int i = 1; i <= index; i++) {
            if (array[i] > max) {
                max = array[i];
                indexOfMax = i;
            }
        }

        for (int i = indexOfMax; i < index; i++) {
            array[i] = array[i + 1];
        }
        index--;

    }


};

int main() {
    MyStack stk;
    cout << stk.IsEmpty() << endl;
    stk.PushIn(4);
    stk.PushIn(11);
    stk.PushIn(9);
    stk.PushIn(2);
    stk.PushIn(7);

    stk.ShowStack();

    stk.RemoveTheLarges();

    stk.ShowStack();

    return 0;
}

