#include <bits/stdc++.h>
using namespace std;

int main() {
    string s; getline(cin, s);
    stringstream ss(s);
    string c; getline(cin, c);
    string tmp;
    vector<string> v;
    while (ss >> tmp) {
        v.push_back(tmp);
    }
    for (string x : v) {
        if (x != c) cout << x << " ";
    }
    return 0;
}