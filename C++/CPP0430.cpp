#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        int A[n];
        int tong = 0;
        for (int i = 0; i < n; i++) {
            cin >> A[i];
        }
        sort (A, A + n);
        for (int i = 0; i < n - 1; i++) {
            if (A[i + 1] - A[i] > 1) {
                tong += (A[i + 1] - A[i]) - 1;
            }
        }
        cout << tong << endl;
    }
    return 0;
}