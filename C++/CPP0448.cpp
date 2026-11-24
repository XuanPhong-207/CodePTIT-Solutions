#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        int n, x; cin >> n >> x;
        int A[n];
        int cnt = 0;
        for (int i = 0; i < n; i++) {
            cin >> A[i];
            if (A[i] == x) cnt++;
        }
        if (cnt != 0) cout << cnt << endl;
        else cout << "-1" << endl;
    }
    return 0;
}