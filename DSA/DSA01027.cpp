#include <bits/stdc++.h>
using namespace std;

int n, X[1000]; 
vector<int> v;

void ktao() {
    for (int i = 1; i <= n; i++) {
        X[i] = i;
    }
}

int main() {
    cin >> n;
    set<int> s;
    for (int i = 1; i <= n; i++) {
        int x; cin >> x;
        s.insert(x);
    }
    for (int x : s) v.push_back(x);
    ktao();
    do {
        for (int i = 1; i <= n; i++) {
            cout << v[X[i] - 1] << ' ';
        }
        cout << endl;
    }
    while (next_permutation(X + 1, X + n + 1));
    return 0;
}