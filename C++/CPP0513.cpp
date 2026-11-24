#include <bits/stdc++.h>
using namespace std;

struct SinhVien {
    string ma, ten, lop, ns;
    float GPA;
};

void chuanhoa(string &s) {
    if (s[1] == '/') s = "0" + s;
    if (s[4] == '/') s.insert(3, "0");
}

void nhap(SinhVien ds[], int N) {
    cin.ignore();
    for (int i = 0; i < N; i++) {
        getline(cin, ds[i].ten);
        getline(cin, ds[i].lop);
        getline(cin, ds[i].ns);
        cin >> ds[i].GPA;
        cin.ignore();
    }
}

void in(SinhVien ds[], int N) {
    for (int i = 0; i < N; i++) {
        chuanhoa(ds[i].ns);
        string ma = "B20DCCN";

if(i + 1 < 10) ma += "00";
else if(i + 1 < 100) ma += "0";

ma += to_string(i + 1);
        cout << ma << " " << ds[i].ten << " " << ds[i].lop << " " << ds[i].ns << " " << fixed << setprecision(2) << ds[i].GPA << endl;
    }
}

int main(){
    struct SinhVien ds[50];
    int N;
    cin >> N;
    nhap(ds, N);
    in(ds, N);
    return 0;
}