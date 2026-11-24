#include <bits/stdc++.h>
using namespace std;

int n, X[1000];

void ktao() {
    for (int i = 1; i <= n; i++) {
        X[i] = i;
    }
}

int main() {
    int t; cin >> t;
    while (t--) {
        cin >> n;
        int A[1000];
        for (int i = 1; i <= n; i++) {
            cin >> A[i];
        }
        ktao();
        int cnt = 0;
        do {
            cnt++;
            bool check = true;
            for (int i = 1; i <= n; i++) {
                if (X[i] != A[i]) check = false;
            }
            if (check == true) {
                cout << cnt << endl;
                break;
            }
        } while (next_permutation(X + 1, X + n + 1));
    }
    return 0;
}