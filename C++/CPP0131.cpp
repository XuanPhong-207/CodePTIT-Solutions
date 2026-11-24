#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        cout << "1 2 3 ";
        for (int i = 4; i <= n; i++) {
            int check = 0;
            for (int j = 2; j * j <= i; j++) {
                if (i % j == 0) {
                    cout << j << " ";
                    check = 1;
                    break;
                }
            }
            if (check == 0) cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}