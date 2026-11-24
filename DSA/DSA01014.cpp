#include <iostream>
using namespace std;

int n, k, s;
int ans;

void Try(int start, int count, int current_sum) {
    if (count == k) {
        if (current_sum == s) {
            ans++;
        }
        return;
    }
    for (int i = start; i <= n; ++i) {
        if (current_sum + i > s) break;
        Try(i + 1, count + 1, current_sum + i);
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    while (cin >> n >> k >> s) {
        if (n == 0 && k == 0 && s == 0) break;
        ans = 0;
        Try(1, 0, 0);
        cout << ans << "\n";
    }
    return 0;
}