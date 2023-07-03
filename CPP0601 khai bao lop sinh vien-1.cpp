#include<bits/stdc++.h>

using namespace std;

class SinhVien{
	private:
		string masv, ht, lop, ns;
		float gpa;
	public:
		void nhap();
		void xuat();
};

void SinhVien::nhap(){
	getline(cin, ht);
	cin >> lop;
	cin >> ns;
	cin >> gpa;
	masv = "B20DCCN001";
	if(ns[1] == '/'){
		ns = '0' + ns;
	}
	if(ns[4] == '/'){
		ns = ns.insert(3, "0");
	}
}

void SinhVien::xuat(){
	cout << masv << " " << ht << " " << lop << " " << ns << " ";
	cout << fixed << setprecision(2) << gpa;
}

int main(){
    SinhVien a;
    a.nhap();
    a.xuat();
    return 0;
}
