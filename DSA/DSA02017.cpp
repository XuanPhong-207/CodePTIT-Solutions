#include <bits/stdc++.h>
using namespace std;

int A[20][20], max_sum, sum, cot[20], d1[20], d2[20];

void inp() {
    max_sum = 0;
    sum = 0;
    memset(cot, 0, sizeof(0));
    memset(d1, 0, sizeof(d1));
    memset(d2, 0, sizeof(d2));
    for (int i = 1; i <= 8; i++) {
        for (int j = 1; j <= 8; j++) {
            cin >> A[i][j];
        }
    }
}

void Try(int i) {
    for (int j = 1; j <= 8; j++) {
        if (cot[j] == 0 && d1[i - j + 8] == 0 && d2[i + j - 1] == 0) {
            sum += A[i][j];
            cot[j] = 1;
            d1[i - j + 8] = 1;
            d2[i + j - 1] = 1;
            if (i == 8) {
                if (sum > max_sum) max_sum = sum;
            }
            else Try(i + 1);
            cot[j] = 0;
            d1[i - j + 8] = 0;
            d2[i + j - 1] = 0;
            sum -= A[i][j];
        }
    }
}

int main() {
    int t; cin >> t;
    while (t--) {
        inp();
        Try(1);
        cout << max_sum << endl;
    }
    return 0;
}