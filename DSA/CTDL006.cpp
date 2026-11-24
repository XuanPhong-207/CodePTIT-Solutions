#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    vector<int> v;
    map<int, int> mp;
    for (int i = 0; i < n; i++) {
        int x; cin >> x;
        v.push_back(x);
    }
    for (auto x : v) {
        mp[x]++;
        if (mp[x] == 1) cout << x << ' '; 
    }
    return 0;
}