#include <bits/stdc++.h>
using namespace std;

int n, k, X[1000], ok;

void ktao() {
	for (int i = 1; i <= n; i++) {
		X[i] = 0;
	}
}

void sinh() {
	int i = n;
	while (i >= 1 && X[i] == 1) {
		X[i] = 0;
		i--;
	}
	if (i == 0) ok = false;
	else X[i] = 1;
}

bool check() {
	int cnt = 0, ans = 0;
	for (int i = 1; i <= n; i++) {
		if (X[i] == 0) cnt++;
		else cnt = 0;
		if (cnt > k) return false;
		if (cnt == k) ans++;
	}
	return ans == 1;
}
 
int main() {
	cin >> n >> k;
	vector<string> v;
	ktao();
	ok = true;
	while (ok) {
		string s = "";
		if (check()) {
			for (int i = 1; i <= n; i++) {
				if (X[i] == 0) s += "A";
				else s += "B";
			}
			v.push_back(s);
		}
		sinh();
	}
	cout << v.size() << endl;
	for (string x : v) cout << x << endl;
	return 0;
}