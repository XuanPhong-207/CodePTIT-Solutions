#include <bits/stdc++.h>
using namespace std;

const int maxn = 1000000;
int prime[maxn + 1];

void sieve() {
    for (int i = 0; i < maxn; i++) {
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
        int cnt = 0;
        long long n; cin >> n;
        for (long long i = 2; i <= sqrt(n); i++) {
            if (prime[i] && i * i <= n) cnt++;
            if (i * i > n) break;
        }
        cout << cnt << endl;
    }
    return 0;
}