#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++) {
        int j; cin >> j;
        v.push_back(j);
    }
    int x; cin >> x;
    for (int k : v) {
        if (k != x) cout << k << ' ';
    }
    return 0;
}