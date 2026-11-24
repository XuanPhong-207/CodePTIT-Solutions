#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        int tmp = n;
        for (int i = 2; i <= sqrt(tmp); i++) {
            int cnt = 0;
            while (tmp % i == 0) {
                cnt++;
                tmp /= i;
            }
            if (cnt != 0) {
                cout << i << " " << cnt << " ";
            }
            if (tmp == 1) {
                break;
            }
        }
        if (tmp > 1) cout << tmp << " 1";
        cout << endl;
    }
    return 0;
}
// chi chay vong for cho i <= sqrt(tmp) vi neu n co 1 uoc so nguyen to lon hon can cua n => uoc con lai chac chan nho hon can cua n
// vi vay vi du 35 = 5 1 7 1, khi vong lap chay den 5 thi no dung lai, khi nay tmp = 7 va doan "if (tmp > 1)" o cuoi se lam not nhiem vu.