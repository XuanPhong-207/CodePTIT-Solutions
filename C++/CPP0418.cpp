#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        int n, m; cin >> n >> m;
        vector<int> A(n), B(m);
        for (int i = 0; i < n; i++) cin >> A[i];
        for (int i = 0; i < m; i++) cin >> B[i];
        vector<int> uni(n + m);
        vector<int> inter(min(n, m));
        auto hop = set_union(A.begin(), A.end(), B.begin(), B.end(), uni.begin());
        auto giao = set_intersection(A.begin(), A.end(), B.begin(), B.end(), inter.begin());
        for (auto it = uni.begin(); it != hop; it++) {
            cout << *it << " ";
        }
        cout << endl;
        for (auto it = inter.begin(); it != giao; it++) {
            cout << *it << " ";
        }
        cout << endl;
    }
    return 0;
}