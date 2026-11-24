#include <iostream>

using namespace std;

int cbcl(int x) {
    int chan = 0;
    int le = 0;
    while (x > 0) {
        int socuoi = x % 10;
        if (socuoi % 2 == 0) chan++;
        else le++;
        x /= 10;
    }
    if (chan == le) return 1;
    else return 0;
}

int main() {
    int n; cin >> n;
    int scs = 1;
    int count = 0;
    for (int i = 2; i <= n; i++) {
        scs *= 10;
    }
    for (int j = scs; j < scs * 10; j++) {
        if (count == 10) {
            cout << endl;
            count = 0;
        }
        if (cbcl(j) == 1) {
            count++;
            cout << j << " ";
        }
    }
    return 0;
}