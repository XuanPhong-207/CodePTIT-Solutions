#include <bits/stdc++.h>
using namespace std;

void solve() {
    int test_num;
    string s;
    cin >> test_num >> s;
    if (next_permutation(s.begin(), s.end())) {
        cout << test_num << " " << s << "\n";
    } else {
        cout << test_num << " BIGGEST\n";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    if (cin >> t) {
        while (t--) {
            solve();
        }
    }
    return 0;
}