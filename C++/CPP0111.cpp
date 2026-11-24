#include <iostream>

using namespace std;

int slk(long long x) {
    int lk = 1;
    int ltsc = x % 10;
    x /= 10;
    while (x != 0) {
        int socuoi = x % 10;
        if (socuoi == ltsc + 1 || socuoi == ltsc - 1) {
            lk = 1;
        }
        else {
            lk = 0;
            break;
        }
        ltsc = socuoi;
        x /= 10;
    }
    return lk;
}

int main() {
    int t; cin >> t;
    while (t--) {
        long long n; cin >> n;
        if (slk(n)) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}