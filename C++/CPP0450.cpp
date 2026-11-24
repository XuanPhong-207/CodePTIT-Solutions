#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        int A[n];
        map <int, int> mp;
        bool check = false;
        bool check2 = false;
        for (int i = 0; i < n; i++) {
            cin >> A[i];
            mp[A[i]]++;
            if (mp[A[i]] > 1 && check2 == false) {
                check = true;
                check2 = true;
                cout << A[i] << endl;
            }
        }
        if (check == false) cout << -1 << endl;
    }
    return 0;
}