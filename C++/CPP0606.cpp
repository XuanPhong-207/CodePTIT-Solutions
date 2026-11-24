#include <bits/stdc++.h>
using namespace std;

class NhanVien {
    private:
    string ten, gt, ns, dc, nkhd;
    long long mxt;

    public:
    friend istream& operator >> (istream &in, NhanVien &nv) {
        getline(in, nv.ten);
        getline(in, nv.gt);
        getline(in, nv.ns);
        getline(in, nv.dc);
        cin >> nv.mxt;
        cin.ignore();
        getline(in, nv.nkhd);
        return in;
    }

    friend ostream& operator << (ostream &out, NhanVien &nv) {
        out << "00001" << " " << nv.ten << " " << nv.gt << " " << nv.ns << " " << nv.dc << " " << nv.mxt << " " << nv.nkhd;
        return out;
    }
};

int main(){
    NhanVien a;
    cin >> a;
    cout << a;
    return 0;
}