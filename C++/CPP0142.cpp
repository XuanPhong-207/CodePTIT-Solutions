#include <bits/stdc++.h>
using namespace std;

const int maxn = 100000;
int prime[maxn + 1];

void sieve() {
    for (int i = 0; i <= maxn; i++) {
        prime[i] = 1;
    }
    prime[0] = prime[1] = 0;
    for (int i = 2; i <= sqrt(maxn); i++) {
        if (prime[i]) {
            for (int j = i * i; j <= maxn; j += i) {
                prime[j] = 0;
            }
        }
    }
}

int main() {
    sieve();
    int t; cin >> t;
    while (t--) {
        int x; cin >> x;
        int t = 0;
        for (int k = 1; k <= x; k++) {
            if (__gcd(k, x) == 1) t++;
        }
        if (prime[t]) cout << 1 << endl;
        else cout << 0 << endl;
    }
    return 0;
}