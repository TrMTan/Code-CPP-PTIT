#include<bits/stdc++.h>

using namespace std;

int i = 1;

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
		string msv, ht, lop, ns;
		float gpa;
	public:
		SinhVien(){
			ht = lop = ns = "";
			gpa = 0;
		}
		float getGpa(){
			return this->gpa;
		}
		friend istream& operator >> (istream& in, SinhVien &a){
			scanf("\n");
			getline(cin, a.ht);
			cin >> a.lop >> a.ns >> a.gpa;
			if(i < 10) a.msv = "B20DCCN00";
			else a.msv = "B20DCCN0";
			a.msv = a.msv + to_string(i);
			i++;
			a.ht = chuanhoa(a.ht);
			if(a.ns[1] == '/') a.ns = "0" + a.ns;
			if(a.ns[4] == '/') a.ns.insert(3, "0");
			return in;
		}
		friend ostream& operator << (ostream& out, SinhVien a){
			cout << a.msv << " " << a.ht << " " << a.lop << " " << a.ns << " " << fixed << setprecision(2) << a.gpa << endl;
			return out;
		}	
};

bool cmp(SinhVien a, SinhVien b){
	return a.getGpa() > b.getGpa();
}

int main(){
	int n;
	cin >> n;
	SinhVien a[n];
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	sort(a, a + n, cmp);
	for(int i = 0; i < n; i++){
		cout << a[i];
	}
}

//2
//ngUYen Van NaM
//D20DCCN01-B
//2/12/2002
//2.17
//Nguyen QuanG hAi
//D20DCCN02-B
//1/9/2002
//3.0

