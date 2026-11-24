#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        long long A[n];
        set <long long> s;
        for (long long i = 0; i < n; i++) {
            cin >> A[i];
            if (A[i] < 10) s.insert(A[i]);
            else {
                long long temp = A[i];
                while (temp >= 10) {
                    int sc = temp % 10;
                    s.insert(sc);
                    temp /= 10;
                }
                s.insert(temp);
            }
        }
        for (auto x : s) {
            cout << x << " ";
        }
        cout << endl;
    }
    return 0;
}