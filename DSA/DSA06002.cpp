#include <bits/stdc++.h>
using namespace std;

int x;
bool cmp(int a, int b){
    return abs(x - a) < abs(x - b);
}

int main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n >> x;
        vector<int> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }
        stable_sort(v.begin(), v.end(), cmp);
        for (int j : v) {
            cout << j << ' ';
        }
        cout << endl;
    }
    return 0;
}