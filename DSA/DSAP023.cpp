#include <iostream>
#include <vector>
using namespace std;

int n, k;
vector<int> a;
int count_combination = 0;
bool isPrime(int x) {
    if (x < 2) return false;
    for (int i = 2; i * i <= x; i++) {
        if (x % i == 0) return false;
    }
    return true;
}
void Try(int i) {
    for (int j = a[i - 1] + 1; j <= n - k + i; j++) {
        a[i] = j;
        if (i == k) {
            count_combination++;
            if (isPrime(count_combination)) {
                cout << count_combination << ": ";
                for (int idx = 1; idx <= k; idx++) {
                    cout << a[idx] << (idx == k ? "" : " ");
                }
                cout << "\n";
            }
        } else {
            Try(i + 1);
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    if (cin >> n >> k) {
        a.resize(k + 1, 0);
        Try(1);
    }
    return 0;
}