#include <bits/stdc++.h>
using namespace std;

int n, A[15][15];
int cnt;
string s;

void Try(int i, int j) {
    // Nếu đến được ô cuối cùng (n, n)
    if (i == n && j == n) {
        cnt++;
        cout << s << " ";
        return;
    }
    
    // Ưu tiên đi xuống dưới (D) trước để đảm bảo thứ tự từ điển D đứng trước R
    if (i + 1 <= n && A[i + 1][j] == 1) {
        A[i + 1][j] = 0; // Đánh dấu đã đi
        s.push_back('D');
        Try(i + 1, j);
        s.pop_back();    // Backtrack
        A[i + 1][j] = 1; // Hủy đánh dấu
    }
    
    // Sau đó đến đi sang phải (R)
    if (j + 1 <= n && A[i][j + 1] == 1) {
        A[i][j + 1] = 0; // Đánh dấu đã đi
        s.push_back('R');
        Try(i, j + 1);
        s.pop_back();    // Backtrack
        A[i][j + 1] = 1; // Hủy đánh dấu
    }
}

void solve() {
    cin >> n;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> A[i][j];
        }
    }
    
    cnt = 0;
    s = "";
    
    // Kiểm tra nếu ô xuất phát hoặc ô kết quả bị vô hiệu hóa (bằng 0)
    if (A[1][1] == 0 || A[n][n] == 0) {
        cout << -1 << endl;
        return;
    }
    
    // Đánh dấu ô xuất phát là đã đi để không quay đầu lại
    A[1][1] = 0;
    Try(1, 1);
    A[1][1] = 1; // Trả lại trạng thái (thực ra không bắt buộc ở gốc nhưng để cho đồng bộ)
    
    if (cnt == 0) {
        cout << -1;
    }
    cout << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; 
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}

// CODE TOI UU HON

// #include <bits/stdc++.h>
// using namespace std;

// int n, X[100][100], cnt;
// string s;

// int di[2] = {1, 0};
// int dj[2] = {0, 1};
// string path = "DR";

// void Try(int i, int j) {
//     if (i == n && j == n) {
//         cnt++;
//         cout << s << " ";
//     }
//     for (int k = 0; k < 2; k++) {
//         int i1 = i + di[k];
//         int j1 = j + dj[k];
//         if (i1 <= n && j1 <= n && X[i1][j1] == 1) {
//             X[i1][j1] = 0;
//             s += path[k];
//             Try(i1, j1);
//             s.pop_back();
//             X[i1][j1] = 1;
//         } 
//     }
// }

// int main() {
//     int t; cin >> t;
//     while (t--) {
//         cin >> n;
//         s = "";
//         cnt = 0;
//         for (int i = 1; i <= n; i++) {
//             for (int j = 1; j <= n; j++) {
//                 cin >> X[i][j];
//             }
//         }
//         if (X[1][1] == 1 && X[n][n] == 1) {
//             Try(1, 1);
//             if (cnt == 0) cout << -1;
//         }
//         else cout << -1;
//         cout << endl;
//     }
//     return 0;
// }