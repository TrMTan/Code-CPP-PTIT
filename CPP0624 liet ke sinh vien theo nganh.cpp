#include<bits/stdc++.h>

using namespace std;

class SinhVien{
	private:
		string msv, ht, lop, email;
	public:
		SinhVien(){
			msv = ht = lop = email = "";
		}
		friend ostream& operator << (ostream &out, SinhVien a){
			cout << a.msv << " " << a.ht << " " << a.lop << " " << a.email << endl;
			return out;
		}
		friend istream& operator >> (istream & in, SinhVien &a){
			cin >> a.msv;
			cin.ignore();
			getline(cin, a.ht);
			cin >> a.lop >> a.email;
			return in; 
		}
		friend bool operator < (SinhVien a, SinhVien b){
			return a.msv < b.msv;
		}
		string getlop(){
			return lop;
		}
		string getMa(){
			return msv;
		}
};

void viethoa(string &s){
	for(char &x : s){
		x = toupper(x);
	}
}

int main(){
	int n;
	cin >> n;
	map<string, vector<SinhVien>> mp;
	for(int i = 0; i < n; i++){
		SinhVien tmp;
		cin >> tmp;
		mp[tmp.getMa().substr(5, 2)].push_back(tmp);
	}
	int q;
	cin >> q;
	cin.ignore();
	while(q--){
		string nganh; getline(cin, nganh);
		viethoa(nganh);
		cout << "DANH SACH SINH VIEN NGANH " << nganh << ":" << endl;
		if(nganh == "KE TOAN"){
			for(SinhVien x: mp["KT"]){
				cout << x;
			}
		}
		else if(nganh == "CONG NGHE THONG TIN"){
			for(SinhVien x: mp["CN"]){
				if(x.getlop().find("E") == string::npos)
					cout << x;
			}
		}
		else if(nganh == "AN TOAN THONG TIN"){
			for(SinhVien x: mp["AT"]){
				if(x.getlop().find("E") == string::npos)
					cout << x;
			}
		}
		else if(nganh == "VIEN THONG"){
			for(SinhVien x: mp["VT"]){
				cout << x;
			}
		}
		else if(nganh == "DIEN TU"){
			for(SinhVien x: mp["DT"]){
				cout << x;
			}
		}
	}
	return 0;
}




