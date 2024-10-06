#include <iostream>
#include <string>
#include <algorithm>
#include <type_traits>
using namespace std;

template <typename T>
void sortThree(T& x, T& y, T& z) {
    if constexpr (std::is_arithmetic_v<T>) {
        if (x > y) {
            swap(x, y);
        }
        if (y > z) {
            swap(y, z);
        }
        if (x > y) {
            swap(x, y);
        }
    }
    else if constexpr (std::is_same_v<T, std::string>) {
        if (x > y) {
            swap(x, y);
        }
        if (y > z) {
            swap(y, z);
        }
        if (x > y) {
            swap(x, y);
        }
    }
    else {
        static_assert("Unsupported type");
    }
}

int main() {
    int a = 3, b = 1, c = 2;
    sortThree(a, b, c);
    cout << "Sorted integers: " << a << ", " << b << ", " << c << std::endl;

    string s1 = "banana", s2 = "apple", s3 = "cherry";
    sortThree(s1, s2, s3);
    cout << "Sorted strings: " << s1 << ", " << s2 << ", " << s3 << std::endl;

    return 0;
}
