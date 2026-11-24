#include <iostream>
#include <string>
using namespace std;

int chiaHet11(string s) {
    int sumChan = 0, sumLe = 0;
    for (int i = 0; i < s.length(); i++) {
        int digit = s[i] - '0';
        if (i % 2 == 0)
            sumChan += digit;
        else
            sumLe += digit;
    }
    if ((sumChan - sumLe) % 11 == 0)
        return 1;
    else
        return 0;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        string N;
        cin >> N;
        cout << chiaHet11(N) << endl;
    }
    return 0;
}