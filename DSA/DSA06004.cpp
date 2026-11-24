#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        int n, m; cin >> n >> m;
        int A[n], B[m];
        set<int> s;
        map<int, int> mp;
        for (int i = 0; i < n; i++) {
            cin >> A[i];
            s.insert(A[i]);
            mp[A[i]]++;
        }
        for (int i = 0; i < m; i++) {
            cin >> B[i];
            s.insert(B[i]);
            mp[B[i]]++;
        }
        for (int x : s) {
            cout << x << ' ';
        }
        cout << endl;
        for (auto x : mp) {
            if (x.second > 1) cout << x.first << ' ';
        }
        cout << endl;
    }
    return 0;
}