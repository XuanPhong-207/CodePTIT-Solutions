#include <iostream>

using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        int locphat = 1;
        while (n > 0) {
            int socuoi = n % 10;
            if (socuoi == 0 || socuoi == 6 || socuoi == 8) {
                locphat = 1;
            }
            else {
                locphat = 0;
                break;
            }
            n/= 10;
        }
        if (locphat == 1) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}