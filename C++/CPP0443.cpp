#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int T; 
    cin >> T;
    while (T--) {
        int n; 
        cin >> n;
        vector<int> a(n - 1);
        long long sum = 0;
        for (int i = 0; i < n - 1; i++) {
            cin >> a[i];
            sum += a[i];
        }
        long long total = 1LL * n * (n + 1) / 2;
        cout << total - sum << endl;
    }
    return 0;
}
