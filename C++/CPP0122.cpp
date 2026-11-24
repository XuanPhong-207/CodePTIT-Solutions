#include <bits/stdc++.h>
using namespace std;

long long BCNN(long long a, long long b) {
    return a * b / __gcd(a, b);
}

long long shithomework(int x) {
    long long res = 1;
    for (int i = 2; i <= x; i++) {
        res = BCNN(res, i);
    }
    return res;
}

int main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        cout << shithomework(n) << endl;
    }
    return 0;
}