#include<bits/stdc++.h>

using namespace std;

struct SinhVien{
    string ht, msv, lop, ns;
    float gpa;
};

void nhap(SinhVien &a){
    a.msv = "B20DCCN001";
    getline(cin, a.ht);
    cin >> a.lop >> a.ns >> a.gpa;
    if(a.ns[1] == '/'){
        a.ns = '0' + a.ns;
    } 
    if(a.ns[4] == '/'){
        a.ns = a.ns.insert(3, "0");
    }
}

void in(SinhVien a){
    cout << a.msv << " " << a.ht << " " << a.lop << " " << a.ns << " " << fixed << setprecision(2) << a.gpa;
}

int main(){
    struct SinhVien a;
    nhap(a);
    in(a);
    return 0;
}