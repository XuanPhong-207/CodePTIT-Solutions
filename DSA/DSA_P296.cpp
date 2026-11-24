#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, q;
    if (!(cin >> n >> q)) return 0;


    vector<long long> pref(n + 1, 0);
    for (int i = 1; i <= n; i++) {
        long long x;
        cin >> x;
        pref[i] = pref[i - 1] + (x > 0 ? x : 0);
    }

    while (q--) {
        int l, r;
        cin >> l >> r;
 
        cout << pref[r] - pref[l - 1] << "\n";
    }

    return 0;
}