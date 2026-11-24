#include <bits/stdc++.h>
using namespace std;

int X[100], A[100];
int n, k, sum = 0, cnt;

void Try(int i, int pos) {
    for (int j = pos; j <= n; j++) {
        X[i] = A[j];
        sum += A[j];
        if (sum == k) {
            cnt++;
            cout << '[';
            for (int l = 1; l <= i; l++) {
                cout << X[l];
                if (l < i) cout << ' ';
            }
            cout << ']' << ' ';
        }
         else Try(i + 1, j + 1);
         sum -= A[j];
    }
}

int main() {
    int t; cin >> t;
    while (t--) {
        cnt = 0;
        cin >> n >> k;
        for (int i = 1; i <= n; i++) {
            cin >> A[i];
        }
        sort(A + 1, A + n + 1);
        Try(1, 1);
        if (cnt == 0) cout << "-1";
        cout << endl;
    }
    return 0;
}