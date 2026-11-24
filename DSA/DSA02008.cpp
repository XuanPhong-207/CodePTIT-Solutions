#include <bits/stdc++.h>
using namespace std;

int X[1000];

int main() {
    int n, k; cin >> n >> k;
    int mt[n + 1][n + 1];
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> mt[i][j];
        }
    }
    for (int i = 1; i <= n; i++) X[i] = i;
    vector<string> res;
    int cnt = 0;
    do {
        int sum = 0;
        for (int i = 1; i <= n; i++) {
            sum += mt[i][X[i]];
        }
        if (sum == k) {
            cnt++;
            string ans = "";
            for (int i = 1; i <= n; i++) {
                ans += to_string(X[i]);
                ans += ' ';
            }
            res.push_back(ans);
        }
    } while (next_permutation(X + 1, X + n + 1));
    cout << cnt << endl;
    for (auto x : res) {
        cout << x << endl;
    }
    return 0;
}