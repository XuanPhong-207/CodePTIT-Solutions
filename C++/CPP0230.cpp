#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    int A[n][3];
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        int check = 0;
        for (int j = 0; j < 3; j++) {
            cin >> A[i][j];
            if (A[i][j] == 1) check++;
            if (check == 2) {
                cnt++;
                check = 0;
            }
        }
    }
    cout << cnt;
    return 0;
}