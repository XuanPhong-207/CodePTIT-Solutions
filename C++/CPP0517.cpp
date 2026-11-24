#include <bits/stdc++.h>
using namespace std;

struct NhanVien {
    string ma, ten, gt, ns, dc, mst, nk;
};

void nhap(NhanVien &x) {
    static bool first = true;
    if(first){
        cin.ignore();
        first = false;
    }
    getline(cin, x.ten);
    getline(cin, x.gt);
    getline(cin, x.ns);
    getline(cin, x.dc);
    getline(cin, x.mst);
    getline(cin, x.nk);
}

void inds(NhanVien ds[], int N) {
    for (int i = 0; i < N; i++) {
        string ma = to_string(i + 1);
        while (ma.length() < 5) ma = "0" + ma;
        cout << ma << " " << ds[i].ten << " " << ds[i].gt << " " << ds[i].ns << " " << ds[i].dc << " " << ds[i].mst << " " << ds[i].nk << endl;
    }
}

int main(){
    struct NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i = 0; i < N; i++) nhap(ds[i]);
    inds(ds,N);
    return 0;
}