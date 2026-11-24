#include <iostream>

using namespace std;

int main() {
    int T; cin >> T;
    while (T--) {
        int n, d;
        cin >> n >> d;
        int A[n];
        for (int i = 0; i < n; i++) {
            cin >> A[i];
        }
        for (int j = d; j < n; j++) {
            cout << A[j] << " ";
        }
        for (int k = 0; k < d; k++) {
            cout << A[k] << " ";
        }
        cout << endl;
    }
    return 0;
}