#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        int k, n; cin >> k >> n;
        int A[k][n];
        vector<int> v;
        for (int i = 0; i < k; i++) {
            for (int j = 0; j < n; j++) {
                cin >> A[i][j];
                v.push_back(A[i][j]);
            }
            sort(v.begin(), v.end());
        }
        for (int x : v) {
            cout << x << " ";
        }
        cout << endl;
    }
    return 0;
}