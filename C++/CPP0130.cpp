#include <bits/stdc++.h>

using namespace std;

bool isPrime(int p) {
    if (p < 2) return false;
    else {
        for (int i = 2; i <= sqrt(p); i++) {
            if (p % i == 0) return false;
        }
    }
    return true;
}
// thật ra k cần check số nguyên tố vì trong quá trình phân tích thừa số từ thấp đến cao, chắc chắn sẽ chỉ lấy được các số nguyên tố mà thôi.
// fact, đéo tin tự đi mà chứng minh lại (nếu m thích tốn tgian thêm)

int main() {
    int t; cin >> t;
    while (t--) {
        long long n; cin >> n;
        for (long long i = 2; i <= sqrt(n); i++) {
            if (isPrime(i)) {
                while (n % i == 0) {
                    cout << i << " ";
                    n /= i;
                }
            }
        }
        if (n > 1) cout << n;
        cout << endl;
    }
    return 0;
}