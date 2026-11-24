#include <bits/stdc++.h>
using namespace std;

bool Fibo(long long x) {
    long long A[100];
    A[0] = 0; A[1] = 1; A[2] = 1;
    if (x == 0 || x == 1) return true;
    for (long long i = 3; i < 100; i++) {
        A[i] = A[i - 2] + A[i - 1];
        if (A[i] == x) return true;
    }
    return false;
}

int main() {
    int t; cin >> t;
    while (t--) {
        long long n; cin >> n;
        if (Fibo(n)) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}