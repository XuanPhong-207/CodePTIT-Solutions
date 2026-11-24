#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        long long n; cin >> n;
        long long A[n];
        for (long long i = 0; i < n; i++) {
            cin >> A[i];
        }
        sort(A, A + n);
        long long l = 0;
        long long r = n - 1;
        for (int i = 1; i <= n; i++) {
            if (l > r) break;
            if (i % 2 == 0) {
                cout << A[l] << ' ';
                l++;
            }
            else {
                cout << A[r] << ' ';
                r--;
            }
        }
        cout << endl;
    }
    return 0;
}