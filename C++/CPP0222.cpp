#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
    
        map<int, int> mp;
        for (int i = 0; i < n; i++) {
            set<int> s;
            for (int j = 0; j < n; j++) {
                int x;
                cin >> x;
                s.insert(x);
            }
            for (auto x : s) {
                mp[x]++;
            }
        }
        int cnt = 0;
        for (auto& p : mp) {
            if (p.second == n) cnt++;
        }
        cout << cnt << endl;
    }
    return 0;
}