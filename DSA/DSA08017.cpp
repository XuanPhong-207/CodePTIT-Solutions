#include <bits/stdc++.h>
using namespace std;

int n, k, X[100], ok;

void ktao() {
    for (int i = 1; i <= k; i++) {
        X[i] = 8;
    }
}

void sinh() {
    int i = k;
    while (i >= 1 && X[i] == 6) {
        X[i] = 8;
        i--;
    }
    if (i == 0) ok = false;
    else {
        X[i] = 6;
    }
}

int main() {
    int t; cin >> t;
    while (t--) {
        cin >> n;
        for (k = n; k >= 1; k--) {
            ktao();
            ok = true;
            while (ok) {
                for (int i = 1; i <= k; i++) {
                    cout << X[i];
                }
                cout << ' ';
                sinh();
            }
        }
        cout << endl;
    }
    return 0;
}