#include <bits/stdc++.h>
using namespace std;

int n, k, X[100], ok;

void ktao() {
    for (int i = 1; i <= n; i++) {
        X[i] = 0;
    }
}

void sinh() {
    int i = n;
    while (i >= 1 && X[i] == 1) {    
        X[i] = 0;
        i--;
    }
    if (i == 0) ok = false;
    else X[i] = 1;
}

int main() {
    int t; cin >> t;
    while (t--) {
        cin >> n >> k;
        ktao();
        ok = true;
        while (ok) {
            int cnt = 0;
            vector<int> v;
            for (int i = 1; i <= n; i++) {
                if (X[i] == 1) cnt++;
                v.push_back(X[i]);
            }
            if (cnt == k) {
                for (int x : v) {
                    cout << x;
                }
                cout << endl;
            }
            sinh();
        }
    }
    return 0;
}