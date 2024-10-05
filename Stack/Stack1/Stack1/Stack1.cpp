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
            if (index == -1) {
                cout << "The stack is empty" << endl;
                return;
            }
            index--;
        }

        bool IsEmpty() {
            return index == -1;
        }

        void ShowStack() {
            if (index == -1) {
                return;
            }
            for (int i = 0; i <= index; i++) {
                cout << array[i] << ", ";
            }
            cout << endl;
        }
};

int main() {
    MyStack stk;
    cout << stk.IsEmpty() << endl;
    stk.PushIn(4);
    stk.PushIn(6);
    stk.PushIn(9);
    stk.ShowStack();
    stk.PopFrom();
    stk.PopFrom();
    
    stk.ShowStack();
    return 0;
}

