#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        long long A[n];
        for (int i = 0; i < n; i++) {
            cin >> A[i];
        }
        long long min = 1000000;
        for (int i = 0; i < n - 1; i++) {
            for (int j = i + 1; j < n; j++) {
                if (abs(min) > abs(A[i] + A[j])) min = A[i] + A[j];
            }
        }
        cout << min << endl;
    }
    return 0;
}