#include <bits/stdc++.h>
using namespace std;

int main() {
    string s; cin >> s;
    for (char x : s) {
        char c = tolower(x);
        if (c != 'a' && c != 'i' && c != 'y' && c != 'u' && c != 'e' && c != 'o') cout << "." << c;
    }
    return 0;
}