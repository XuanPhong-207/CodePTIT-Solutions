#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int T; cin >> T;
    while (T--) {
        int n; cin >> n;
        int A[n];
        for (int i = 0; i < n; i++) {
            cin >> A[i];
        }
        sort(A, A + n);
        int minNE = 1;
        for (int i = 0; i < n; i++) {
            if (A[i] == minNE) minNE++;
        }
        cout << minNE << endl;
    }
    return 0;
}