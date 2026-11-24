#include <bits/stdc++.h>
using namespace std;

int n, A[100][100], cnt;
string s;

void Try(int i, int j) {
    if (i == n && j == n) {
        cnt++;
        cout << s << ' ';
    }
    if (i + 1 <= n && A[i + 1][j] == 1) {
        s += "D";
        A[i + 1][j] = 0;
        Try(i + 1, j);
        s.pop_back();
        A[i + 1][j] = 1;
    }
    if (j - 1 >= 1 && A[i][j - 1] == 1) {
        s += "L";
        A[i][j - 1] = 0;
        Try(i, j - 1);
        s.pop_back();
        A[i][j - 1] = 1;
    }
    if (j + 1 <= n && A[i][j + 1] == 1) {
        s += "R";
        A[i][j + 1] = 0;
        Try(i, j + 1);
        s.pop_back();
        A[i][j + 1] = 1;
    }
    if (i - 1 >= 1 && A[i - 1][j] == 1) {
        s += "U";
        A[i - 1][j] = 0;
        Try(i - 1, j);
        s.pop_back();
        A[i - 1][j] = 1;
    }
}

// PHUONG PHAP KHOA HOC HON (khong hieu thi copy nem len bao AI phan tich cho)

// int dx[4] = {1, 0, 0, -1}; // vi tri i
// int dy[4] = {0, -1, 1, 0}; // vi tri j
// string path = "DLRU"; // sap xep theo thu tu tu dien

// void Try(int i, int j) {
//     if (i == n && j == n) {
//         cnt++;
//         cout << s << ' ';
//     }
//     for (int k = 0; k < 4; k++) {
//         int i1 = i + dx[k];
//         int j1 = j + dy[k];
//         if (i1 >= 1 && i1 <= n && j1 >= 1 && j1 <= n && A[i1][j1] == 1) {
//             s += path[k];
//             A[i1][j1] = 0;
//             Try(i1, j1);
//             s.pop_back();
//             A[i1][j1] = 1;
//         }
//     }
// }

int main() {
    int t; cin >> t;
    while (t--) {
        cin >> n;
        s = "";
        cnt = 0;
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n; j++) {
                cin >> A[i][j];
            }
        }
        if (A[1][1] && A[n][n]) {
            A[1][1] = 0; // khong di lai o nay nua
            Try(1, 1);
        }
        if (cnt == 0) cout << -1;
        cout << endl;
    }
    return 0;
}