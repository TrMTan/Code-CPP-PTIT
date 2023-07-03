#include<bits/stdc++.h>

using namespace std;

string chuanhoa(string s){
	string tmp, res = "";
	stringstream ss(s);
	while(ss >> tmp){
		res += toupper(tmp[0]);
		for(int i = 1; i < tmp.length(); i++){
			res += tolower(tmp[i]);
		}
		res += " ";
	}
	res.erase(res.length() - 1);
	return res;
}

class SinhVien{
	private:
		string ma, ht, lop, email;
	public:
		string getMa(){
			return this->ma;
		}
		friend istream& operator >> (istream& in, SinhVien &a){
			scanf("\n");
			getline(cin, a.ma);
			getline(cin, a.ht);
			getline(cin, a.lop);
			getline(cin, a.email);
			a.ht = chuanhoa(a.ht);
			return in;
		}
		friend ostream& operator << (ostream& out, SinhVien a){
			cout << a.ma << " " << a.ht << " " << a.lop << " " << a.email << endl;
			return out;
		}
};

int main(){
	int n;
	cin >> n;
	SinhVien a[n];
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	for(int i = 0; i < n; i++){
		cout << a[i];
	}
	int q;
	cin >> q;
	while(q--){
		string s;
		cin >> s;
		cout << "DANH SACH SINH VIEN KHOA " << s << " :" << endl;
		for(int i = 0; i < n; i++){
			if(a[i].getMa().substr(0,4) == s){
				cout << a[i];
			}
		}
	}
}




