#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        int A[n];
        int tong = 0;
        map<int, int> mp;
        for (int i = 0; i < n; i++) {
            cin >> A[i];
            mp[A[i]]++;
        }
        for (auto x : mp) {
            if (x.second >= 2) tong += x.second;
        }
        cout << tong << endl;
    }
    return 0;
}