#include <iostream>
#include <deque>
using namespace std;

class MyStack {
    deque<int> stack;
    
    public: 

        void PushIn(int vale) {
            stack.push_back(vale);
        }
        void ShowStack() {
            deque<int>::iterator iter;
            for (iter = stack.begin(); iter != stack.end(); iter++) {
                cout << *iter << ", ";
            }
            cout << endl;
        }
        void ReverseStack() {
            deque<int> tempStak = stack;

            stack.clear(); 

            
            for (auto iter = tempStak.rbegin(); iter != tempStak.rend(); iter++) {
                stack.push_back(*iter);
            }
        }

};




int main() {
    MyStack stk;
    stk.PushIn(1);
    stk.PushIn(2);
    stk.PushIn(3);
    stk.PushIn(4);

    stk.ShowStack();

    stk.ReverseStack();

    stk.ShowStack();

    return 0;
}
