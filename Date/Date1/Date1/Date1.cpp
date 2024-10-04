#include <iostream>
#include <ctime>
using namespace std;

void func() {
    time_t currentTime = time(nullptr);
    char buffer[26];
    ctime_s(buffer, sizeof(buffer), &currentTime);
    cout << "Current time: " << buffer;
}

int main() {
    func();
}
