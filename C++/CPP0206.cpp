#include <iostream>

using namespace std;

int main() {
    int T; cin >> T;
    while (T--) {
        int n; cin >> n;
        int A[n];
        for (int i = 0; i < n; i++) {
            cin >> A[i];
        }
        int max = A[0];
        for (int j = 0; j < n; j++) {
            if (A[j] > max) max = A[j];
        }
        cout << max << endl;
    }
    return 0;
}