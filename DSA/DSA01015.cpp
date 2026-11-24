#include <bits/stdc++.h>
using namespace std;

int ok;
string s;
long long res[501];
vector<string> ans;


void sinh() {
    int i = s.size() - 1;
    while (i >= 0 && s[i] == '9') {
        s[i] = '0';
        i--;
    }
    if (i == -1) ok = false;
    else s[i] = '9';
}

int main() {
    s = "0000000000000";
    ok = true;
    while (ok) {
        ans.push_back(s);
        sinh();
    }
    for (int i = 1; i <= 500; i++) {
        for (auto x : ans) {
            long long tmp = stoll(x);
            if (tmp % i == 0 && tmp != 0) {
                res[i] = tmp; break;
            }
        }
    }
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        cout << res[n] << endl;
    }
    return 0;
}