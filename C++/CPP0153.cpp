#include <bits/stdc++.h>

using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        long long k; cin >> k;
        long long s = 0;
        for (int i = 1; i <= n; i++) {
            s += (i % k);
        }
        cout << s << endl;
    }
    return 0;
}