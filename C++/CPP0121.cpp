#include <bits/stdc++.h>

using namespace std;

int main() {
    int t; cin >> t;
 while (t--) {
        long long a, b; cin >> a >> b;
        long long ab = a * b;
        while (a != b) {
            if (a > b) a -= b;
            else b -= a;
        }
        long long BCLN = ab / a;
        cout << BCLN << " " << a << endl;
    }
    return 0;
}