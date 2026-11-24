#include <bits/stdc++.h>
using namespace std;

int n,X[1000], ok;

void ktao() {
    for (int i = 1; i <= n; i++) {
        X[i] = 0;
    }
}

void sinh() {
    int i = n;
    while (i >= 1 && X[i] == 1) {
        X[i] = 0;
        i--;
    }
    if (i == 0) ok = false;
    X[i] = 1;
}

int main() {
    int t; cin >> t;
    while (t--) {
        cin >> n;
        ktao();
        ok = true;
        while (ok) {
            string s = "";
            int cnt = 0;
            bool check = false;
            if (X[1] == 1 && X[n] == 0) {
                check = true;
                for (int i = 1; i <= n; i++) {
                    if (X[i] == 1) {
                        s += 'H';
                        cnt++;
                    }
                    else {
                        s += 'A';
                        cnt = 0;
                    }
                    if (cnt > 1) {
                        check = false;
                        break;
                    } 
                }
            }
            if (check) {
                cout << s << endl;
            }
            sinh();
        }
    }
    return 0;
}