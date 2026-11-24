#include <bits/stdc++.h>
using namespace std;

typedef struct PhanSo {
    long long a, b;
}ps;

void nhap(ps &x) {
    cin >> x.a >> x.b;
}

ps tong(ps p, ps q) {
    long long mau = (p.b * q.b) / __gcd(p.b, q.b);
    long long tu = (p.a * (mau / p.b)) + (q.a * (mau / q.b));
    long long g = __gcd(tu, mau);
    ps res;
    res.a = tu / g;
    res.b = mau / g;
    return res;
}

void in(ps x) {
    cout << x.a << "/" << x.b;
}

int main() {
	struct PhanSo p,q;
	nhap(p); nhap(q);
	PhanSo t = tong(p,q);
	in(t);
	return 0;
}