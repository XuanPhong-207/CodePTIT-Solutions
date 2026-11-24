#include <bits/stdc++.h>
using namespace std;

int board[8][8];
bool col[8];       
bool diag1[15];    
bool diag2[15];    
int max_score;

void Try(int row, int current_score) {
    if (row == 8) {
        max_score = max(max_score, current_score);
        return;
    }

    for (int c = 0; c < 8; c++) {
        if (!col[c] && !diag1[row - c + 7] && !diag2[row + c]) {
            col[c] = true;
            diag1[row - c + 7] = true;
            diag2[row + c] = true;
            Try(row + 1, current_score + board[row][c]);
            col[c] = false;
            diag1[row - c + 7] = false;
            diag2[row + c] = false;
        }
    }
}

void solve(int test_num) {
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            cin >> board[i][j];
        }
    }
    max_score = 0;
    for (int i = 0; i < 8; i++) col[i] = false;
    for (int i = 0; i < 15; i++) {
        diag1[i] = false;
        diag2[i] = false;
    }

    Try(0, 0);
    cout << "Test " << test_num << ": " << max_score << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    if (cin >> t) {
        for (int i = 1; i <= t; i++) {
            solve(i);
        }
    }
    return 0;
}