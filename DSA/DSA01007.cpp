#include <bits/stdc++.h>
using namespace std;

int n, ok;
char X[1000];

void ktao() {
    for (int i = 1; i <= n; i++) {
        X[i] = 'A';
    }
}

void sinh() {
    int i = n;
    while (i >= 1 && X[i] == 'B') {
        X[i] = 'A';
        i--;
    }
    if (i == 0) ok = false;
    else X[i] = 'B';
}

int main() {
    int t; cin >> t;
    while (t--) {
        cin >> n;
        ktao();
        ok = true;
        while (ok) {
            for (int i = 1; i <= n; i++) {
                cout << X[i];
            }
            cout << ' ';
            sinh();
        }
        cout << endl;
    }
    return 0;
}