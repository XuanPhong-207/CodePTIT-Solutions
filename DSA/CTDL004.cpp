#include <iostream>
#include <vector>
using namespace std;

int n, k;
vector<int> a;
int ans = 0;

void Try(int start_idx, int count, int prev_val) {
    if (count == k) {
        ans++;
        return;
    }
    for (int j = start_idx; j < n; j++) {
        if (a[j] > prev_val) {
            Try(j + 1, count + 1, a[j]);
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    if (cin >> n >> k) {
        a.resize(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        Try(0, 0, -1);
        cout << ans << "\n";
    }
    return 0;
}