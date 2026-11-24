#include <bits/stdc++.h>

using namespace std;

typedef struct SinhVien{
    string ten, lop, ngaysinh;
    float GPA;
}sv;

void chuanhoa(string &s) {
    if (s[1] == '/') s = "0" + s;
    if (s[4] == '/') s.insert(3, "0");
}

void nhap(sv &x) {
    getline(cin, x.ten);
    getline(cin, x.lop);
    getline(cin, x.ngaysinh);
    cin >> x.GPA;
}

void in(sv x) {
    chuanhoa(x.ngaysinh);
    cout << "B20DCCN001" << " " << x.ten << " " << x.lop << " " << x.ngaysinh << " " << fixed << setprecision(2) << x.GPA;
}

int main(){
    struct SinhVien a;
    nhap(a);
    in(a);
    return 0;
}