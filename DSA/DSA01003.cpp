#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        int n, X[1000]; cin >> n;
        for (int i = 1; i <= n; i++) {
            cin >> X[i];
        }
        next_permutation(X + 1, X + n + 1);
        for (int i = 1; i <= n; i++) {
            cout << X[i] << ' ';
        }
        cout << endl;
    }
    return 0;
}