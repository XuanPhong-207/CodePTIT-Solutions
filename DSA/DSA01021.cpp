#include <bits/stdc++.h>
using namespace std;

int n, k, X[1000], ok;
set<int> s;

void ktao() {
    for (int i = 1; i <= k; i++) {
        cin >> X[i];
        s.insert(X[i]);
    }
}

void sinh() {
    int i = k;
    while (i >= 1 && X[i] == n - k + i) {
        i--;
    }
    if (i == 0) ok = false;
    else {
        X[i]++;
        for (int j = i + 1; j <= k; j++) {
            X[j] = X[j - 1] + 1;
        }
    }
}

int main() {
    int t; cin >> t;
    while (t--) {
        cin >> n >> k;
        ktao();
        ok = true;
        sinh();
        if (ok) {
            int cnt = 0;
            for (int i = 1; i <= k; i++) {
                if (s.find(X[i]) == s.end()) cnt++;
            }
            cout << cnt << endl;
        }
        else {
            cout << k << endl;
        }
        s.clear();
    }
    return 0;
}