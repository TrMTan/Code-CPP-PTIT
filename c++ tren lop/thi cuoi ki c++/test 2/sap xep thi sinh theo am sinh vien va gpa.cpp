#include<bits/stdc++.h>

using namespace std;

int i = 1;

string chuanhoa(string s){
	stringstream ss(s);
	string res = "";
	string tmp;
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
		string msv, ht, ns, lop;
		float gpa;
	public:
		friend ostream &operator << (ostream &out, SinhVien a){
			cout << a.msv << " " << a.ht << " " << a.lop << " " << a.ns << " " << fixed << setprecision(2) << a.gpa << endl;
			return out;
		}
		friend istream &operator >> (istream &in, SinhVien &a){
			if(i < 10) a.msv = "SV00";
			else a.msv = "SV0";
			a.msv = a.msv + to_string(i);
			cin.ignore();
			getline(cin, a.ht);
			a.ht = chuanhoa(a.ht);
			cin >> a.lop >> a.ns >> a.gpa;
			if(a.ns[1] == '/') a.ns = "0" + a.ns;
			if(a.ns[4] == '/') a.ns.insert(3, "0");
			i++;
			return in;
		}
		string getMa(){
			return this->msv;
		}
		double getGPA(){
			return this->gpa;
		}
		
};

bool cmp(SinhVien a, SinhVien b){
	if(a.getGPA() != b.getGPA()){
		return a.getGPA() > b.getGPA();
	}
	return a.getMa() < b.getMa();
}

int main(){
	SinhVien a[50];
	int n;
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	sort(a, a + n, cmp);
	for(int i = 0; i < n; i++){
		cout << a[i];
	}
	return 0;
}
