#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while (t--) {
        int X, Y, Z; cin >> X >> Y >> Z;
        long long N; cin >> N;
        bool check = false;
        for (long long i = pow(10, N - 1); i < pow(10, N); i++) {
            if (i % X == 0 && i % Y == 0 && i % Z == 0) {
                check = true;
                cout << i << endl;
                break;
            }
        }
        if (check == false) cout << -1 << endl;
    }
    return 0;
}