#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    if (!(cin >> n)) return 0;
    vector<int> a(n);
    iota(a.begin(), a.end(), 1);

    int count = 1;
    do {
        cout << count++ << ": ";
        for (int i = 0; i < n; i++) {
            cout << a[i] << (i == n - 1 ? "" : " ");
        }
        cout << "\n";
    } while (next_permutation(a.begin(), a.end()));

    return 0;
}