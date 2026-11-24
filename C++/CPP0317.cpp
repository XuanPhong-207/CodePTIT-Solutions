#include <bits/stdc++.h>
using namespace std;

bool doixung (string s) {
    int l = 0, r = s.size() - 1;
    while (l < r) {
        if (s[l] != s[r]) return false;
        l++;
        r--;
    }
    return true;
}

bool sochan(string s) {
    for (char c : s) {
        if ((c - '0') % 2 != 0) return false;
    }
    return true;
}

int main() {
    int t; cin >> t;
    while (t--) {
        string s; cin >> s;
        if (doixung(s) && sochan(s)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}