#include <bits/stdc++.h>
using namespace std;

int n, k, X[1000], ok;

void ktao() {
    for (int i = 1; i <= k; i++) {
        X[i] = i;
    }
}

void sinh() {
    int i = k;
    while (i >= 1 && X[i] == n - k + i) i--;
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
        int A[1000];
        ktao();
        for (int i = 1; i <= k; i++) {
            cin >> A[i];
        }
        int cnt = 0;
        ok = true;
        while (ok) {
            cnt++;
            bool check = true;
            for (int i = 1; i <= k; i++) {
                if (X[i] != A[i]) {
                    check = false;
                    break;
                }
            }
            if (check) {
                cout << cnt << endl;
                break;
            }
            sinh();
        }
    }
    return 0;
}