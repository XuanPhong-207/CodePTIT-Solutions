#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        long long B[93];
        long long A[n];
        B[0] = 0; B[1] = 1; B[2] = 1; 
        set<long long> s;
        for (int i = 0; i < 3; i++) {
            s.insert(B[i]);
        }
        for (int i = 3; i < 93; i++) {
            B[i] = B[i - 1] + B[i - 2];
            s.insert(B[i]);
        }
        for (int i = 0; i < n; i++) {
            cin >> A[i];
            if (s.find(A[i]) != s.end()) cout << A[i] << " ";
        }
        cout << endl;
    }
    return 0;
}