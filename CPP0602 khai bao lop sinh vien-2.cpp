#include<bits/stdc++.h>

using namespace std;

class SinhVien{
	private:
		string masv, ht, lop, ns;
		float gpa;
	public:
		SinhVien(){
			masv = ht = ns = " ";
			gpa = 0;
		}
		friend ostream& operator << (ostream&, SinhVien);
		friend istream& operator >> (istream&, SinhVien &);
};

ostream& operator << (ostream& out, SinhVien a){
	out << a.masv << " " << a.ht << " " << a.lop << " " << a.ns << " " << fixed << setprecision(2) << a.gpa << endl;
	return out; 
}

istream& operator >> (istream& in, SinhVien &a){
	a.masv = "B20DCCN001";
	getline(in, a.ht);
	in >> a.lop >> a.ns >> a.gpa;
	if(a.ns[1] == '/') a.ns = "0" + a.ns;
	if(a.ns[4] == '/') a.ns = a.ns.insert(3, "0");
	return in;
}

int main(){
    SinhVien a;
    cin >> a;
    cout << a;
    return 0;
}
