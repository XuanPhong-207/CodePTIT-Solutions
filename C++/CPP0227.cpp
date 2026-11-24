#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        int A[n][n];
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> A[i][j];
            }
        }
        int cnt = 0;
        for (int i = 0; i < n; i++) {
            cnt++;
            if (cnt % 2 != 0) {
                for (int j = 0; j < n; j++) {
                    cout << A[i][j] << " ";
                }
            }
            else {
                for (int j = n - 1; j >= 0; j--) {
                    cout << A[i][j] << " ";
                }
            }
        }
        cout << endl;
    }
    return 0;
}