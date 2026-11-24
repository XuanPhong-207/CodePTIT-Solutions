#include <bits/stdc++.h>

using namespace std;

int nt[10000001];

void sieve(){
    for (int i = 0; i <= 10000000; i++) {
        nt[i] = 1;
    }
    nt[0] = nt[1] = 0;
    for (int i = 2; i <= sqrt(10000000); i++) {
        if (nt[i]) {
            for (int j = i * i; j <= 10000000; j += i) {
                nt[j] = 0;
            }
        }
    }
}
// Sàng Eratosthenes

int main() {
    sieve();
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        for (int i = 2; i <= sqrt(n); i++) {
            if (nt[i]) cout << i * i << " ";
        }
        cout << endl;
    }
    return 0;
}