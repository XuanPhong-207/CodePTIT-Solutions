#include <bits//stdc++.h>
using namespace std;

class SinhVien {
    private:
    string ten, lop, ns;
    float GPA;

    public:

    void nhap() {
        getline(cin, ten);
        getline(cin, lop);
        getline(cin, ns);
        cin >> GPA;
    }

    void chuanhoa() {
        if (ns[1] == '/') ns = "0" + ns;
        if (ns[4] == '/') ns.insert(3, "0");
    }

    void xuat() {
        chuanhoa();
        cout << "B20DCCN001" << " " << ten << " " << lop << " " << ns << " " << fixed << setprecision(2) << GPA;
    }
};

int main(){
    SinhVien a;
    a.nhap();
    a.xuat();
    return 0;
}