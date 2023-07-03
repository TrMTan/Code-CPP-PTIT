#include<bits/stdc++.h>

using namespace std;

long long ucln(long long a, long long b){
    while(b != 0){
        long long r = a % b;
        a = b;
        b = r;
    }
    return a;
}

struct PhanSo{
    long long tu, mau;
};

void nhap(PhanSo &p){
    cin >> p.tu >> p.mau;
}

void rutgon(PhanSo &p){
    long long t = ucln(p.tu, p.mau);
    p.tu /= t;
    p.mau /= t;
}

PhanSo tong(PhanSo a, PhanSo b){
    PhanSo t;
    t.mau = a.mau * b.mau;
    t.tu = a.tu * b.mau + b.tu * a.mau;
    rutgon(t);
    return t;
}

void in(PhanSo t){
    cout << t.tu << "/" << t.mau;
}

int main() {
	struct PhanSo p,q;
	nhap(p); nhap(q);
	PhanSo t = tong(p,q);
	in(t);
	return 0;
}