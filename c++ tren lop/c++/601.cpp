#include<bits/stdc++.h>

using namespace std;

class SinhVien{
    private:
        string msv, ht, lop, ns;
        float gpa;
    public:
        void xuat();
        void nhap();
};

void SinhVien::nhap(){
    msv = "B20DCCN001";
    getline(cin, ht);
    cin >> lop >> ns >> gpa;
    if(ns[1] == '/'){
        ns = '0' + ns;
    }
    if(ns[4] == '/'){
        ns = ns.insert(3, "0");
    }
}

void SinhVien::xuat(){
    cout << msv << " " << ht << " " << lop << " " << ns << " " << fixed << setprecision(2) << gpa <<  endl;
}

int main(){
    SinhVien a;
    a.nhap();
    a.xuat();
    return 0;
}