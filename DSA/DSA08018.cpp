#include <bits/stdc++.h>
using namespace std;

int n, k, X[1000], ok;
vector<string> v;

void ktao() {
    for (int i = 1; i <= k; i++) {
        X[i] = 6;
    }
}

void sinh() {
    int i = k;
    while (i >= 1 && X[i] == 8) {
        X[i] = 6;
        i--;
    }
    if (i == 0) ok = false;
    else X[i] = 8;
}

int main() {
    int t; cin >> t;
    while (t--) {
        cin >> n;
        k = 1;
        int cnt = 0;
        while (k <= n) {
            ktao();
            ok = true;
            while (ok) {
                cnt++;
                string s = "";
                for (int i = 1; i <= k; i++) {
                    s += to_string(X[i]);
                }
                v.push_back(s);
                sinh();
            }
            k++;
        }
        cout << cnt << endl;
        for (auto x : v) {
            cout << x << ' ';
        }
        cout << endl;
        v.clear();
    }
    return 0;
}