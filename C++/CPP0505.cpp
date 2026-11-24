#include <bits/stdc++.h>

using namespace std;

typedef struct NhanVien {
    string name, sex, born, address, sign;
    long long tax;
}nv;

void nhap(nv &x) {
    getline(cin, x.name);
    getline(cin, x.sex);
    getline(cin, x.born);
    getline(cin, x.address);
    cin >> x.tax;
    cin.ignore();
    getline(cin, x.sign);

}

void in(nv x) {
    cout << "00001" << " " << x.name << " " << x.sex << " " << x.born << " " << x.address << " " << x.tax << " " << x.sign;
}

int main(){
    struct NhanVien a;
    nhap(a);
    in(a);
    return 0;
}