#include <bits/stdc++.h>
using namespace std;

string chuanhoa(string s) {
    stringstream ss(s);
    vector<string> v;
    string tmp;
    while (ss >> tmp) {
        for (int i = 0; i < tmp.size(); i++) {
            tmp[i] = tolower(tmp[i]);
        }
        tmp[0] = toupper(tmp[0]);
        v.push_back(tmp);
    }
    string res = "";
    for (int i = 0; i < v.size() - 1; i++) {
        res += v[i];
        if (i != v.size() - 2) {
            res += " ";     
        }
    }
    res += ", ";
    for (char x : v.back()) {
        res += toupper(x);
    }
    return res;
} 

int main() {
    string s; getline(cin, s);
    cout << chuanhoa(s) << endl;
    return 0;
}