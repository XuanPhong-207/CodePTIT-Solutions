#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        int n, k; cin >> n >> k;
        int A[n];
        for (int i = 0; i < n; i++) {
            cin >> A[i];
        }
        bool check = false;
        for (int i = 0; i < n; i++) {
            if (A[i] == k) {
                check = true;
                cout << "1" << endl;
                break;
            }
        }
        if (check == false) cout << "-1" << endl;
    }
    return 0;
}