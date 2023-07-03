#include<bits/stdc++.h>

using namespace std;

struct NhanVien{
    string manv, ht, gt, ns, dc, hd, mst;
};

void nhap(NhanVien &a){
    a.manv = "00001";
    getline(cin, a.ht);
    cin >> a.gt >> a.ns;
    cin.ignore();
    getline(cin, a.dc);
    cin >> a.mst >> a.hd;
}

void in(NhanVien a){
    cout << a.manv << " " << a.ht << " " << a.gt << " " << a.ns << " " << a.dc << " " << a.mst << " " << a.hd;
}

int main(){
    struct NhanVien a;
    nhap(a);
    in(a);
    return 0;
}