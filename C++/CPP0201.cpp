#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;

        int A[N];
        for (int i = 0; i < N; i++) {
            cin >> A[i];
        }
        sort(A, A + N);
        int minDiff = A[1] - A[0];
        for (int i = 1; i < N; i++) {
            if (A[i] - A[i - 1] < minDiff) {
                minDiff = A[i] - A[i - 1];
            }
        }
        cout << minDiff << endl;
    }
    return 0;
}