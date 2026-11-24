#include <bits/stdc++.h>
using namespace std;

const int maxn = (int)10e6;
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

bool tanggiam(int x) {
    string s = to_string(x);
    bool tang = true, giam = true;
    for (int i = 1; i < s.size(); i++) {
        if (s[i] > s[i - 1]) giam = false;
        if (s[i] < s[i - 1]) tang = false;
    }
    return tang || giam;
}

int main() {
    sieve();
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        int cnt = 0;
        for (int i = pow(10, n - 1); i < pow(10, n); i++) {
            if (prime[i] && tanggiam(i)) cnt++;
        }
        cout << cnt << endl;
    }
    return 0;
}