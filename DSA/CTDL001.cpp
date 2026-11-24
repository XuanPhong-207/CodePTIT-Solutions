#include <bits/stdc++.h>
using namespace std;

int n;
vector<int> a;

void printPalindrome() {
    for (int i = 0; i < n; i++) cout << a[i] << " ";
    cout << "\n";
}

void Try(int i) {
    if (i >= (n+1)/2) {
        for (int j = (n+1)/2; j < n; j++) {
            a[j] = a[n-1-j];
        }
        printPalindrome();
        return;
    }
    for (int bit = 0; bit <= 1; bit++) {
        a[i] = bit;
        Try(i+1);
    }
}

int main() {
    cin >> n;
    a.resize(n);
    Try(0);
    return 0;
}
