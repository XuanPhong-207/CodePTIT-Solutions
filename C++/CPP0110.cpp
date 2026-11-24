#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        string s; cin >> s;
        int check = s.find("084");
        s.erase (check, 3);
        cout << s << endl;
    }
    return 0;
}