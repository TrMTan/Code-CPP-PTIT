#include<bits/stdc++.h>

using namespace std;

class SinhVien{
	private:
		string msv, ht, lop, email;
	public:
		SinhVien(){
			msv = ht = lop = email = "";
		}
		friend ostream& operator << (ostream&, SinhVien);
		friend istream& operator >> (istream&, SinhVien &);
		string getLop(){
			return this->lop;
		}
};

ostream& operator << (ostream& out, SinhVien a){
	out << a.msv << " " << a.ht << " " << a.lop << " " << a.email << endl;
	return out;
}

istream& operator >> (istream& in, SinhVien &a){
	in >> a.msv;
	in.ignore();
	getline(in, a.ht);
	in >> a.lop >> a.email;
	return in;
}

int main(){
	int n;
	cin >> n;
	SinhVien a[n];
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	int q;
	cin >> q;
	while(q--){
		string s;
		cin >> s;
		cout << "DANH SACH SINH VIEN LOP " << s << ":" << endl;
		for(SinhVien x : a){
			if(x.getLop() == s){
				cout << x;
			}
		}
	}
}

