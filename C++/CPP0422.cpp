#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        long long n; cin >> n;
        long long A[n];
        long long cnt = 0;
        for (long long i = 0; i < n; i++) {
            cin >> A[i];
        }
        for (long long j = 0; j < n; j++) {
            if (A[j] != 0) cout << A[j] << " ";
            if (A[j] == 0) cnt++;
        }
        for (long long k = 0; k < cnt; k++) {
            cout << 0 << " ";
        }
        cout << endl;
    }
    return 0;
}