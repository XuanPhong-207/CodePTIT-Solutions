#include <bits/stdc++.h>

using namespace std;

int n, k;
vector<int> a;
vector<int> res;
int count_subsets = 0;

void Try(int start_idx, int current_sum) {
    if (current_sum == k) {
        for (int i = 0; i < res.size(); i++) {
            cout << res[i] << (i == res.size() - 1 ? "" : " ");
        }
        cout << "\n";
        count_subsets++;
        return;
    }

    for (int j = start_idx; j < n; j++) {
        if (current_sum + a[j] <= k) {
            res.push_back(a[j]);
            Try(j + 1, current_sum + a[j]);
            res.pop_back(); // Quay lui
        } else {
            break; 
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n >> k;
    a.resize(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    sort(a.begin(), a.end());

    Try(0, 0);

    cout << count_subsets << "\n";

    return 0;
}