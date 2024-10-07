#include <math.h>
#include <iostream>
#include <iomanip>
using namespace std;

bool isPrime(unsigned u) {
    if (u < 4) return u > 1; 
    if (!(u % 3)) return false; 

    
    unsigned q = static_cast<unsigned>(sqrt(static_cast<long double>(u)));
    unsigned c = 5; 
    while (c <= q) {
        
        if (!(u % c) || !(u % (c + 2))) return false;
        c += 6; 
    }
    return true; 
}

int main() {
    unsigned mx = 200; 
    unsigned wid = static_cast<unsigned>(log10(static_cast<long double>(mx))) + 1; 

    cout << "Prime numbers up to " << mx << ":\n";
    cout << "[" << setw(wid) << 2 << " "; 
    unsigned u = 3, p = 1; 
    while (u <= mx) {
        if (isPrime(u)) { 
            cout << setw(wid) << u << " "; 
            p++; 
        }
        u += 2; 
    }
    cout << "]\n\n Found " << p << " primes.\n\n"; 
    return 0;
}
