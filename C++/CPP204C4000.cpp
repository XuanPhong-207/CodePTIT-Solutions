#include <bits/stdc++.h>

using namespace std;

typedef struct SinhVien {
    string msv, ten, lop, ngaysinh;
    float diem;
} sv;

void nhapThongTinSV(sv &x) {
    x.msv = "N20DCCN001";
    getline(cin, x.ten);
    getline(cin, x.lop);
    getline(cin, x.ngaysinh);
    cin >> x.diem;
    if(x.ngaysinh[2] != '/') x.ngaysinh.insert(0, "0");
    if(x.ngaysinh[5] != '/') x.ngaysinh.insert(3, "0");
}

void inThongTinSV(sv x) {
    cout << x.msv << " " << x.ten << " " << x.lop << " " << x.ngaysinh << " " << fixed << setprecision(2) << x.diem;
}

int main(){
    struct SinhVien a;
    nhapThongTinSV(a);
    inThongTinSV(a);
    return 0;
}