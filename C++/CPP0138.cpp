#include <bits/stdc++.h>

using namespace std;

bool isPrime (int p) {
    if (p < 2) return false;
    else {
        for (int i = 2; i * i <= p; i++) {
            if (p % i == 0) return false;
        }
    }
    return true;
}

int main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        for (int i = 2; i <= n / 2; i++) {
            if (isPrime(i) && isPrime(n - i)) {
                cout << i << " " << n - i << endl;
                break;
            }
        }
    }
    return 0;
}