#include <bits/stdc++.h>

using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        long long n, k; cin >> n >> k;
        long long cnt = 0;
        for (long long i = 2; i <= sqrt(n); i++) {
            if (n % i == 0) {
                while (n % i == 0) {
                    cnt++;
                    n /= i;
                    if (cnt == k) {
                        cout << i << endl;
                        break;
                    }
                }
                if (cnt == k) {
                        break;
                    }
            }
        }
        if (n > 1) {
            cnt++;
            if (cnt == k) {
                        cout << n << endl; 
            }
        }
        if (cnt < k) cout << "-1" << endl;
    }
    return 0;
}