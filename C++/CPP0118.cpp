#include <bits/stdc++.h>
using namespace std;

bool Sphenic(int s) {
    int cnt = 0;
    for (int i = 2; i * i <= s; i++) {
        int dem = 0;
        while (s % i == 0) {
            cnt++;
            dem++;
            s /= i;
        }
        if (dem > 1 || cnt > 3) return false;
    }
    if (s > 1) cnt++;
    if (cnt != 3) return false;
    return true;
}

int main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        if (Sphenic(n)) cout << 1 << endl;
        else cout << 0 << endl;
    }
    return 0;
}