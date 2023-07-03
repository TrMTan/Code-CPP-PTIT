#include<bits/stdc++.h>

using namespace std;

class PhanSo{
    private:
        long long tu, mau;
    public:
        PhanSo(long long t, long long m){
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
        friend ostream& operator << (ostream &out, PhanSo p){
            cout << p.tu << "/" << p.mau;
            return out;
        }
};


int main() {
	PhanSo p(1,1);
	cin >> p;
	p.rutgon();
	cout << p;
	return 0;
}