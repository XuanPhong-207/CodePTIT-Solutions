#include <bits/stdc++.h>

using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        long long A[93];
        A[0] = 0;
        A[1] = 1;
        for (int i = 2; i <= 92; i++) {
            A[i] = A[i - 1] + A[i - 2];
        }
        cout << A[n] << endl;
    }
    return 0;
}