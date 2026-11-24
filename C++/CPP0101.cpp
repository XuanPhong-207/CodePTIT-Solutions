#include <iostream>

using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        long long kq = (long long)n * (n + 1) / 2;
        cout << kq << endl;
    }
    return 0;
}