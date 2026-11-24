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
    int n; cin >> n;
    if (isPrime(n)) cout << "YES";
    else cout << "NO";
    return 0;
}