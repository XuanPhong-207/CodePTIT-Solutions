#include <iostream>
#include <math.h>

using namespace std;

int isPrime(long long p) {
    int Prime = 1;
    if (p < 2) Prime = 0;
    else {
        for (long long i = 2; i <= sqrt(p); i++) {
            if (p % i == 0) {
                Prime = 0;
                break;
            }
        }
    }
    return Prime;
}

int main() {
    int t; cin >> t;
    while (t--) {
        long long M, N;
        cin >> M >> N;
        for (long long i = M; i <= N; i++) {
            if (isPrime(i)) cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}