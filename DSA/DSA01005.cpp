#include <bits/stdc++.h>
using namespace std;

int n, X[100];

void ktao() {
    for (int i = 1; i <= n; i++) {
        X[i] = i;
    }
}

int main() {
    int t; cin >> t;
    while (t--) {
        cin >> n;
        ktao();
        for (int i = 1; i <= n; i++) {
                cout << X[i];
            }
            cout << ' ';
        while (next_permutation(X + 1, X + n + 1)) {
            for (int i = 1; i <= n; i++) {
                cout << X[i];
            }
            cout << ' ';
        }
        cout << endl;
    }
    return 0;
}