#include<bits/stdc++.h>

using namespace std;

int i = 1;

string chuanhoa(string s){
	stringstream ss(s);
	string res = "";
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
		double gpa;
	public:
		SinhVien(){
			msv = ht = lop = ns = "";
			gpa = 0;
		}
		friend ostream& operator << (ostream& out, const SinhVien a){
			out << a.msv << " " << a.ht << " " << a.lop << " " << a.ns << " " << fixed << setprecision(2) << a.gpa << endl;
			return out;
		}
		friend istream& operator >> (istream& in, SinhVien &a){
			if(i < 10) a.msv = "B20DCCN00";
			else a.msv = "B20DCCN0";
			a.msv = a.msv + to_string(i);
			cin.ignore();
			getline(in, a.ht);
			a.ht = chuanhoa(a.ht);
			in >> a.lop >> a.ns >> a.gpa;
			if(a.ns[1] == '/') a.ns = '0' + a.ns;
			if(a.ns[4] == '/') a.ns.insert(3, "0");
			i++;
			return in;
		}
};

int main(){
    SinhVien ds[50];
    int N, i;
    cin >> N;
    for(i=0;i<N;i++){
        cin >> ds[i];
    }
    for(i=0;i<N;i++){
        cout << ds[i];
    }
    return 0;
}
