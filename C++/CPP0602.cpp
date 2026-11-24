#include <bits/stdc++.h>
using namespace std;

class SinhVien {
    private:
    string ten, lop, ns;
    float GPA;

    public:
    void chuanhoa() {
        if (ns[1] == '/') ns = "0" + ns;
        if (ns[4] == '/') ns.insert(3, "0");
    }

    friend istream& operator >> (istream &in, SinhVien &sv) {
        getline(in, sv.ten);
        getline(in, sv.lop);
        getline(in, sv.ns);
        cin >> sv.GPA;
        sv.chuanhoa();
        return in;
    }

    friend ostream& operator << (ostream &out, SinhVien &sv) {
        out << "B20DCCN001" << " " << sv.ten << " " << sv.lop << " " << sv.ns << " " << fixed << setprecision(2) << sv.GPA;
        return out;
    }
};

int main(){
    SinhVien a;
    cin >> a;
    cout << a;
    return 0;
}