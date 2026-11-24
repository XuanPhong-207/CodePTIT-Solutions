#include <bits/stdc++.h>

using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        int m, n; cin >> m >> n;
        long long A[m], B[n];
        for (int i = 0; i < m; i++) {
            cin >> A[i];
        }
        for (int j = 0; j < n; j++) {
            cin >> B[j];
        }
        sort(A, A + m);
        sort(B, B + n);
        long long tich = A[m - 1] * B[0];
        cout << tich << endl;
    }
    return 0;
}