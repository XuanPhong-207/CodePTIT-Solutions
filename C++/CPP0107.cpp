#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        char A[15], B[15];
        A[0] = 'A'; A[1] = 'B'; A[2] = 'B'; A[3] = 'A'; A[4] = 'D'; A[5] = 'C'; A[6] = 'C'; A[7] = 'A'; A[8] = 'B'; A[9] = 'D'; A[10] = 'C'; A[11] = 'C'; A[12] = 'A'; A[13] = 'B'; A[14] = 'D';
        B[0] = 'A'; B[1] = 'C'; B[2] = 'C'; B[3] = 'A'; B[4] = 'B'; B[5] = 'C'; B[6] = 'D'; B[7] = 'D'; B[8] = 'B'; B[9] = 'B'; B[10] = 'C'; B[11] = 'D'; B[12] = 'D'; B[13] = 'B'; B[14] = 'B';
        int md; cin >> md;
        char C[15];
        double diem = 0;
        for (int i = 0; i < 15; i++) {
            cin >> C[i];
            if (md == 101) {
                if (C[i] == A[i]) diem += (double)2 / 3;
            }
            else {
                if (C[i] == B[i]) diem += (double)2 / 3;
            }
        }
        cout << fixed << setprecision(2) << diem << endl;
    }
    return 0;
}