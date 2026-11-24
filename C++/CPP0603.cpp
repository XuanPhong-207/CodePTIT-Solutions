#include <bits/stdc++.h>
using namespace std;

class SinhVien {
    private:
    string ten, lop, ns;
    float GPA;

    public:

    string chuanhoaht(string x) {
        stringstream ss(x);
        string word, res = "";
        while (ss >> word) {
            word[0] = toupper(word[0]);
            for (int i = 1; i < word.size(); i++) {
                word[i] = tolower(word[i]);
            }
            if (!res.empty()) res += " "; 
            res += word;
        }
        return res;
    }

    friend istream& operator >> (istream &in, SinhVien &sv) {
        getline(in, sv.ten);
        getline(in, sv.lop);
        getline(in, sv.ns);
        in >> sv.GPA;
        sv.ten = sv.chuanhoaht(sv.ten);
        if (sv.ns[1] == '/') sv.ns = "0" + sv.ns;
        if (sv.ns[4] == '/') sv.ns.insert(3, "0");
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