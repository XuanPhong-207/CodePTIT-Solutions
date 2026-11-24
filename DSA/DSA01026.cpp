#include <bits/stdc++.h>
using namespace std;

int n, X[1000], ok;

void ktao() {
    X[1] = 8;
    for (int i = 2; i <= n; i++) {
        X[i] = 6;
    }
}

void sinh() {
    int i = n;
    while (i >= 0 && X[i] == 8) {
        X[i] = 6;
        i--;
    }
    if (i == 0) ok = false;
    else X[i] = 8;
}

bool check() {
    if (n < 6) return false;
    if (X[1] != 8 || X[n] != 6) return false;
    int i = 1;
    while (i < n) {
        if (X[i] == 8 && X[i + 1] == 8) return false;
        if (X[i] == 6 && X[i + 1] == 6 && X[i + 2] == 6 && X[i + 3] == 6) return false;
        i++;
    }
    return true;
}

int main() {
    cin >> n;
    ktao();
    ok = true;
    while (ok) {
        if (check()) {
            for (int i = 1; i <= n; i++) {
                cout << X[i];
            }
            cout << endl;
        }
        sinh();
    }
    return 0;
}