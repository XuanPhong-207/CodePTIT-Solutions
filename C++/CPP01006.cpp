#include <iostream>

using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        long long n; cin >> n;
        long long m = 0, temp = n;
        while (temp > 0) {
            m = m * 10 + temp % 10;
            temp /= 10;
        }
        if (m == n) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }
    return 0;
}