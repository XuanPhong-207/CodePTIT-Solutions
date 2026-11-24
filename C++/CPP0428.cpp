#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        int n, m; cin >> n >> m;
        long long A[n], B[m];
        vector<long long> v;
        for (int i = 0; i < n; i++) {
            cin >> A[i];
            v.push_back(A[i]);
        }
        for (int j = 0; j < m; j++) {
            cin >> B[j];
            v.push_back(B[j]);
        }
        sort(v.begin(), v.end());
        for (long long x : v) {
            cout << x << " ";
        }
        cout << endl;
    }
    return 0;
}