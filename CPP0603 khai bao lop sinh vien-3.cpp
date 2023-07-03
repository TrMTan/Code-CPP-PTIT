#include<bits/stdc++.h>

using namespace std;

string chuanhoa(string s){
	stringstream ss(s);
	string res = " ";
	string token;
	while(ss >> token){
		res += toupper(token[0]);
		for(int i = 1; i < token.length(); i++){
			res += tolower(token[i]);
		}
		res += " ";
	}
	res.erase(res.length() - 1);
	return res;
}

class SinhVien{
	private:
		string msv, ht, lop, ns;
		float gpa;
	public:
		SinhVien(){
			msv = ht = lop = " ";
			gpa = 0;
		}
		friend ostream& operator << (ostream&, SinhVien);
		friend istream& operator >> (istream&, SinhVien &);
};

ostream& operator << (ostream& out, SinhVien a){
	out << a.msv << " " << a.ht << " " << a.lop << " " << a.ns << " " << fixed << setprecision(2) << a.gpa;
	return out; 
}

istream& operator >> (istream& in, SinhVien &a){
	a.msv = "B20DCCN001";
	getline(in, a.ht);
	cin >> a.lop >> a.ns >> a.gpa;
	a.ht = chuanhoa(a.ht);
	if(a.ns[1] == '/') a.ns = "0" + a.ns;
	if(a.ns[4] == '/') a.ns.insert(3, "0"); 
	return in;
}

int main(){
    SinhVien a;
    cin >> a;
    cout << a;
    return 0;
}
