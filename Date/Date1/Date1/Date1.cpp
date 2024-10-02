#include <iostream>
#include <ctime>
using namespace std;

int main() {
    time_t currentTime = time(nullptr);
    char buffer[26]; 
    ctime_s(buffer, sizeof(buffer), &currentTime);
    cout << "Current time: " << buffer;
    return 0;
}
