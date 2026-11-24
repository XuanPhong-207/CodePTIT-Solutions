#include <bits/stdc++.h>
using namespace std;

bool isPrime(int p) {
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
        int L, R; cin >> L >> R;
        int cnt = 0;
        for (int i = L; i <= R; i++) {
            if (isPrime(i)) cnt++;
        }
        cout << cnt << endl;
    }
    return 0;
}