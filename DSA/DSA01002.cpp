#include <bits/stdc++.h>
using namespace std;

int n, k;

int main() {
    int t; cin >> t;
    while (t--) {
        cin >> n >> k;
        int X[1000];
        bool checkj = true;
        for (int i = 1; i <= k; i++) {
            cin >> X[i];
        }
        int j = k;
        while (j >= 1 && X[j] == n - k + j) {
            j--;
        }
        if (j == 0) {
            checkj = false;
            for (int x = 1; x <= k; x++) {
                cout << x << ' ';
            }
            cout << endl;
        }
        else {
            X[j]++;
            for (int x = j + 1; x <= k; x++) {
                X[x] = X[x - 1] + 1;
            }
        }
        if (checkj == true) {
            for (int x = 1; x <= k; x++) {
            cout << X[x] << ' ';
        }
        cout << endl;
            }
        }
    return 0;
}