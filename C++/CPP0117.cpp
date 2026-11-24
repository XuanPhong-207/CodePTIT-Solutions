#include <iostream>

using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        int sum = 0;
        while (n != 0) {
            sum += n % 10;
            n /= 10;
        }
        while (sum >= 10) {
            int sum2 = sum;
            sum = 0;
            while (sum2 != 0) {
                sum += sum2 % 10;
                sum2 /= 10;
            }
        }
        cout << sum << endl;
    }
    return 0;
}