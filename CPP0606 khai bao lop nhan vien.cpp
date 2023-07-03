#include<bits/stdc++.h>

using namespace std;

class NhanVien{
	private:
		string manv, ht, gt, ns, dc, mst, hd;
	public:
		void nhap();
		void xuat();
};

void NhanVien::nhap(){
	manv = "00001";
	getline(cin, ht);
	cin >> gt;
	cin >> ns;
	cin.ignore();
	getline(cin, dc);
	cin >> mst;
	cin >> hd;
}

void NhanVien::xuat(){
	cout << manv << " " << ht << " " << gt << " " << ns << " " << dc << " " << mst << " " << hd;
}

int main(){
    NhanVien a;
    a.nhap();
    a.xuat();
    return 0;
}
