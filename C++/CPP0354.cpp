#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        string s; cin >> s;
        map<char, int> mp;
        map<char,int> check;
        for (char x : s) {
            mp[x]++;
        }
        for (int i = 0; i < s.length(); i++) {
            if (check.find(s[i]) == check.end()) {
                check[s[i]] = 1;
                cout << s[i] << mp[s[i]];
            }
        }
        cout << endl;
    }
    return 0;
}