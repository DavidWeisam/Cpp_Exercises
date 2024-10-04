#include <iostream>
using namespace std;

class myQueue {
    public: 
        
        myQueue(int maxSize) {
            _maxSize = maxSize;
            _size = 0;
            _numbers = new int[maxSize];
            _back = 0;
        }
        
        ~myQueue() {
            delete[] _numbers;
        }
        
        void enqueue(int number) {
            if (_size <= _maxSize) {
                _numbers[_back] = number;
                _back++;
                _size++;
            }
        }

        void dequeue() {
            if (_size != 0) {
                for (int i = 0; i < _back; i++) {
                    _numbers[i] = _numbers[i + 1];
                }
                _back--;
            }
        
        }
        void showQueue() {
            for (int i = 0; i < _back; i++) {
                cout << _numbers[i] << ", ";
            }
            cout << endl;
        
        }


    private:
        int _size;
        int* _numbers;
        int _back;
        int _maxSize;

};


int main() {
    myQueue myqueue(3);

    myqueue.showQueue();

    myqueue.enqueue(1);
    myqueue.enqueue(2);
    myqueue.enqueue(3);

    myqueue.showQueue();

    myqueue.dequeue();
    myqueue.dequeue();

    myqueue.showQueue();
}
