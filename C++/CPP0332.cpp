#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    getline(cin, s);
    stringstream ss(s);
    string word;
    vector<string> v;
    while (ss >> word) {
        for (char &x : word) {
            x = tolower(x);
        }
        v.push_back(word);
    }
    cout << v[v.size() - 1];
    for (int i = 0; i < v.size() - 1; i++) {
        cout << v[i][0];
    } 
    cout << "@ptit.edu.vn";
    return 0;
}