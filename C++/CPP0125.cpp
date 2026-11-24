#include <iostream>
#include <math.h>

using namespace std;

int isPrime(int p) {
    int Prime = 1;
    if (p < 2) Prime = 0;
    else {
        for (int i = 2; i <= sqrt(p); i++) {
            if (p % i == 0) {
                Prime = 0;
                break;
            }
        }
    }
    return Prime;
}

int main() {
    int a, b;
    cin >> a >> b;
    int start, end;
    if (a > b) {
        start = b;
        end = a;
    }
    else {
        start = a;
        end = b;
    }
    for (int i = start; i <= end; i++) {
        if (isPrime(i) == 1) cout << i << " "; 
    }
    return 0;
}