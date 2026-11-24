#include <bits/stdc++.h>
using namespace std;

int n, X[1000], k, ok;
vector<int> v;

void ktao() {
    for (int i = 1; i <= k; i++) {
        X[i] = i;
    }
}

void sinh() {
    int i = k;
    while (i >= 1 && X[i] == v.size() - k + i) {
        i--;
    }
    if (i == 0) ok = false;
    else {
        X[i]++;
        for (int j = i + 1; j <= k; j++) {
            X[j] = X[j - 1] + 1;
        }
    }
}

int main() {
    cin >> n >> k;
    set<int> s;
    for (int i = 0; i < n; i++) {
        int x; cin >> x;
        s.insert(x);
    }
    for (int x : s) {
        v.push_back(x);
    }
    ktao();
    ok = true;
    while (ok) {
        for (int i = 1; i <= k; i++) {
            cout << v[X[i] - 1] << ' ';
        }
        cout << endl;
        sinh();
    }
    return 0;
}