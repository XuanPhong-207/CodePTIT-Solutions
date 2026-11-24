#include <bits/stdc++.h>
using namespace std;

class PhanSo {
    private:
    long long a, b;

    public:

    PhanSo(long long tu = 0, long long mau = 1) {
        a = tu;
        b = mau;
    }

    friend istream& operator >> (istream &in, PhanSo &ps) {
        in >> ps.a >> ps.b;
        return in;
    }

    void rutgon() {
        long long GCD = __gcd(a, b);
        a /= GCD;
        b /= GCD;
    }

    friend ostream& operator << (ostream &out, PhanSo &ps) {
        out << ps.a << '/' << ps.b;
        return out;
    }
};

int main() {
	PhanSo p(1,1);
	cin >> p;
	p.rutgon();
	cout << p;
	return 0;
}