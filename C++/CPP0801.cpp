#include <bits/stdc++.h>
using namespace std;

int main() {
    ifstream fin ("PTIT.in");
    ofstream fout ("PTIT.out");
    string s;
    while (getline(fin, s)) {
        fout << s << endl;
    }
    fin.close();
    fout.close();
    return 0;
}