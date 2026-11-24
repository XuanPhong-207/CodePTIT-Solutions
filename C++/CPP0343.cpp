#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    cin.ignore();
    while (t--) {
        string s; getline(cin, s);
        stringstream ss(s);
        vector<int> v;
        int x;
        while (ss >> x) {
            v.push_back(x);
        }
        bool check = true;
        if (v.size() % 2 == 0) {
            int le = 0, chan = 0;
            for (int i = 0; i < v.size(); i++) {
                if (v[i] % 2 != 0) {
                    le++;
                }
                else chan++;
            }
            if (le > chan) check = false;
        }
        else if (v.size() % 2 != 0) {
            int le = 0, chan = 0;
            for (int i = 0; i < v.size(); i++) {
                if (v[i] % 2 == 0) {
                    chan++;
                }
                else le++;
            }
            if (chan > le) check = false;
        }
        if (check) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}