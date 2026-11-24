#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        int cnt = 0;
        if (n % 2 == 0) cnt++;
        for (int i = 2; i * i <= n; i++) {
            if (n % i == 0 && i % 2 == 0) {
                cnt++;
            } 
        }
        if (n % 2 == 0) cnt++;
        cout << cnt << endl;
    }
    return 0;
}