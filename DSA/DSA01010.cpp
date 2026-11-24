#include <bits/stdc++.h>
using namespace std;

int n, k, X[1000];
bool check;

void sinh() {
    int i = k;
    while (i >= 1 && X[i] == n - k + i) {
        i--;
    }
    if (i == 0) check = true;
    else {
        X[i]++;
        for (int j = i + 1; j <= k; j++) {
            X[j] = X[j - 1] + 1;
        }
    }
}

int main() {
	int t; cin >> t;
	while (t--) {
		map<int, int> mp;
		cin >> n >> k;
		check = false;
		for (int i = 1; i <= k; i++) {
			cin >> X[i];
			mp[X[i]]++;
		}
		sinh();
		if (check) cout << k << endl;
		else {
			for (int i = 1; i <= k; i++) {
			mp[X[i]]++;
		    }
		    int cnt = 0;
		    for (auto x : mp) {
			    if (x.second == 1) cnt++;
		    }
		    cout << cnt / 2 << endl;
		}
	}
	return 0;
}