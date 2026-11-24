#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        int n, m; cin >> n >> m;
        int A[n][m], B[n][m];
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                B[i][j] = 0;
            }
        }
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> A[i][j];
                if (A[i][j] == 1) {
                    for (int k = 0; k < n; k++) {
                        B[k][j] = 1;
                    }
                    for (int l = 0; l < m; l++) {
                        B[i][l] = 1;
                    }
                }
            }
        }
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cout << B[i][j] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}