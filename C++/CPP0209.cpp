#include <bits/stdc++.h>

using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        int n, q; cin >> n >> q;
        int A[n]; 
        for (int i = 0; i < n; i++) {
            cin >> A[i];
        }
        while (q--) {
            int l, r; cin >> l >> r;
            int sum = 0;
            for (int j = l - 1; j < r; j++) {
                sum += A[j];
            }
            cout << sum << endl;
        }
    }
    return 0;
}