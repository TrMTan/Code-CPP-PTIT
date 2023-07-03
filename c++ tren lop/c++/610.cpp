#include<bits/stdc++.h>

using namespace std;

class PhanSo{
    private:
        long long tu, mau;
    public:
        PhanSo(long long t = 0, long long m = 0){
            tu = t;
            mau = m;
        }
        void rutgon(){
            long long g = __gcd(tu, mau);
            tu /= g;
            mau /= g;
        }
        friend istream& operator >> (istream &in, PhanSo &p){
            cin >> p.tu >> p.mau;
            return in;
        }
        PhanSo operator + (PhanSo b){
            PhanSo a;
            a.tu = tu * b.mau + mau * b.tu;
            a.mau = mau * b.mau;
            a.rutgon();
            return a;
        }
        friend ostream& operator << (ostream &out, PhanSo p){
            cout << p.tu << "/" << p.mau;
            return out;
        }
};


int main() {
	PhanSo p(1,1), q(1,1);
	cin >> p >> q;
	cout << p + q;
	return 0;
}