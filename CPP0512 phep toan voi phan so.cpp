#include<bits/stdc++.h>

using namespace std;

struct PhanSo{
	long long tu, mau;
};

void rutgon(PhanSo &a){
	long long uc = __gcd(a.tu, a.mau);
	a.tu /= uc;
	a.mau /= uc; 
}

PhanSo tong(PhanSo a, PhanSo b){
	PhanSo c;
	c.tu = a.tu * b.mau + b.tu * a.mau;
	c.mau = a.mau * b.mau;
	rutgon(c);
	return c;
}

PhanSo nhan(PhanSo a, PhanSo b){
	PhanSo d;
	d.tu = a.tu * b.tu;
	d.mau = a.mau * b.mau;
	rutgon(d);
	return d;
}

void process(PhanSo A, PhanSo B){
	PhanSo C = nhan(tong(A, B), tong(A, B));
	PhanSo D = nhan(nhan(A, B), C);
	cout << C.tu << "/" << C.mau << " " << D.tu << "/" << D.mau << endl;
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




