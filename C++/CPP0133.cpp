#include <bits/stdc++.h>

using namespace std;

bool isPrime(int p) {
    if (p < 2) return false;
    else {
        for (int i = 2; i <= sqrt(p); i++) {
            if (p % i == 0) return false;
        }
    }
    return true;
}

int main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        for (int i = 2; i <= n; i++) {
            if (isPrime(i)) cout << i << " "; 
        }
        cout << endl;
    }
    return 0;
}