#include<bits/stdc++.h>

using namespace std;

class PhanSo{
	private:
		long long tu, mau;
	public:
		PhanSo(long long t = 0, long long m = 1){
			tu = t;
			mau = m;
		}
		
		void rutgon(){
	        long long uc = __gcd(tu, mau);
	        tu /= uc;
	        mau /= uc;
    	}
		friend istream& operator >> (istream& in, PhanSo& a){
			in >> a.tu >> a.mau;
			return in;
		}
		
		friend ostream& operator << (ostream& out, const PhanSo a){
			out << a.tu << "/" << a.mau << endl;
			return out; 
		}
 		PhanSo operator + (PhanSo b){
	        PhanSo a;
	        a.tu = tu * b.mau + b.tu * mau;
	        a.mau = mau * b.mau;
	        a.rutgon();
	        return a;
    	}
		
};

int main() {
	PhanSo p(1,1), q(1,1);
	cin >> p >> q;
	cout << p + q;
	return 0;
}
