#include <bits/stdc++.h>

using namespace std;

bool isPrime (int p) {
    if (p < 2) return false;
    else {
        for (int i = 2; i <= sqrt(p); i++) {
            if (p % i == 0) {
                return false;
            }
        }
    }
    return true;
}

int main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        bool check = false;
        for (int i = 2; i <= n / 2; i++) {
            if (isPrime(i) == true && isPrime(n - i) == true) {
                cout << i << " " << n - i << endl;
                check = true;
                break;
            }
        }
        if (check == false) cout << -1 << endl;
    }
    return 0;
}