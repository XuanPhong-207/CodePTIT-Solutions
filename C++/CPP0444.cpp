#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        int n, k; cin >> n >> k;
        int A[n];
        for (int i = 0; i < n; i++) {
            cin >> A[i];
        }
        for (int j = 0; j < n; j++) {
            if (A[j] == k) {
                cout << j + 1 << endl;
                break;
            }
        }
    }
    return 0;
}