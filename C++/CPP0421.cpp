#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        long long A[n];
        for (long long i = 0; i < n; i++) {
            cin >> A[i];
        }
        for (long long i = 0; i < n; i++) {
            bool check = false;
            for (long long j = 0; j < n; j++) {
                if (A[j] == i) {
                    cout << A[j] << " ";
                    check = true;
                    break;
                }
            }
            if (check == false) cout << "-1 ";
        }
        cout << endl;
    }
    return 0;
}