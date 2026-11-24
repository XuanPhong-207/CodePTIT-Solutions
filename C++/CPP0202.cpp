#include <iostream>
#include <cmath>
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
        sort(A, A + n, greater<int>());
        int minDiff = pow(10, 3);
        for (int i = 0; i < n - 1; i++) {
            for (int j = i + 1; j < n; j++) {
                if ((A[i] - A[j]) < minDiff) minDiff = (A[i] - A[j]);
            }
        }
        cout << minDiff << endl;
    }
    return 0;
}