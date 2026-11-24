#include <bits/stdc++.h>
using namespace std;

struct PhanSo {
    long long a, b;
};

void giaiquyet(PhanSo &x) {
    cin >> x.a >> x.b;
    long long UCLN = __gcd(x.a, x.b);
    long long tren = x.a / UCLN;
    long long duoi = x.b / UCLN;
    cout << tren << '/' << duoi;
}

int main() {
struct PhanSo A;
giaiquyet(A);
return 0;
}