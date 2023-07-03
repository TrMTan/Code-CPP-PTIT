#include<bits/stdc++.h>

using namespace std;

struct PhanSo{
    long long tu, mau;
};

void rutgon(PhanSo &a){
    long long t = __gcd(a.tu, a.mau);
    a.tu /= t;
    a.mau /= t;
}

PhanSo cong(PhanSo a, PhanSo b){
    PhanSo c;
    c.tu = a.tu * b.mau + a.mau * b.tu;
    c.mau = a.mau * b.mau;
    rutgon(c);
    return c;
}

PhanSo nhan(PhanSo a, PhanSo b){
    PhanSo c;
    c.tu = a.tu * b.tu;
    c.mau = a.mau * b.mau;
    rutgon(c);
    return c;
}

void process(PhanSo a, PhanSo b){
    PhanSo c = nhan(cong(a, b), cong(a, b));
    PhanSo d = nhan(nhan(a, b), c);
    cout << c.tu << "/" << c.mau << " " << d.tu << "/" << d.mau << endl;
}

int main() {
	int t;
	cin >> t;
	while (t--) {
		PhanSo A;
		PhanSo B;
		cin >> A.tu >> A.mau >> B.tu >> B.mau;
		process(A, B);
	}
}