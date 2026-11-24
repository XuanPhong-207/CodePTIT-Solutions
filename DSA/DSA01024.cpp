#include <bits/stdc++.h>
using namespace std;

int n, k, X[1000], ok;
set<string> s;
vector<string> v;

void ktao() {
    for (int i = 1; i <= k; i++) {
        X[i] = i;
    }
}

void sinh () {
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
    for (int i = 0; i < n; i++) {
        string str; cin >> str;
        s.insert(str);
    }
    for (auto x : s) {
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