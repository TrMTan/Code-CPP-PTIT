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
};

int main(){
	int n; cin >> n;
	map<int, vector<SinhVien>> mp;
	for(int i = 0; i < n; i++){
		SinhVien tmp;
		cin >> tmp;
		mp[stoi(tmp.getLop().substr(1, 2))].push_back(tmp);
	}
	int q; cin >> q;
	while(q--){
		int nam;
		cin >> nam;
		cout << "DANH SACH SINH VIEN KHOA " << nam << ":" << endl;
		for(SinhVien x : mp[nam % 100]){
			cout << x;
		}
	}
}
