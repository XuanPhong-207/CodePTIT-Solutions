#include <bits/stdc++.h>

using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        long long n; cin >> n;
        long long sntln;
        for (int i = 2; i <= sqrt(n); i++) {
                while (n % i == 0) {
                    n /= i;
                    sntln = i;
                }
            }
        if (n > 1 && n > sntln) cout << n << endl;
        else cout << sntln << endl;
    }
    return 0;
}