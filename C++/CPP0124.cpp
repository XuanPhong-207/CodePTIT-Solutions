#include <bits/stdc++.h>

using namespace std;

void phantich(int p) {
    for (int i = 2; i <= sqrt(p); i++) {
        int dem = 0;
        while (p % i == 0) {
            dem++;
            p /= i;
        }
        if (dem > 0) {
            cout << i << " " << dem << " " << endl;
        }
    }
    if (p > 1) {
        cout << p << " 1";
    }
}

int main() {
    int n; cin >> n;
    phantich(n);
    cout << endl;
    return 0;
}