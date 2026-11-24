#include <bits/stdc++.h>

using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        int A[n];
        for (int i = 0; i < n; i++) {
            cin >> A[i];
        }
        sort(A, A + n);
        if (n < 3) {
            for (int i = n - 1; i >= 0; i--) {
                cout << A[i] << " ";
            }
        }
        else {
            int l = 0; 
            int r = n - 2;
            cout << A[n - 1] << " ";
            for (int i = 1; i < n - 1; i++) {
                if (i % 2 != 0) {
                    cout << A[l] << " ";
                    l++;
                }
                else {
                    cout << A[r] << " ";
                    r--;
                }
                if (l == r) {
                    cout << A[l];
                    break;
                }
            }
        }
        cout << endl;
    }
    return 0;
}