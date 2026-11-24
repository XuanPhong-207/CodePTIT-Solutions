#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        long long a, x, y; cin >> a >> x >> y;
        string P, Q;
        for (long long i = 1; i <= x; i++) {
            P = P + "x";
        }
        for (long long i = 1; i <= y; i++) {
            Q = Q + "x";
        }
        long long kq = __gcd(P - '0', Q - '0');
    }
}