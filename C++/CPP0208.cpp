#include <iostream>
#include <algorithm>

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
        sort(A, A + n);
        cout << A[d-1] << endl;
    }
    return 0;
}