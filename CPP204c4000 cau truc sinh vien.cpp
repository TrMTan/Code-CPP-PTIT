#include<bits/stdc++.h>

using namespace std;

struct SinhVien{
	string msv = "N20DCCN001";
	string ht, lop, ns;
	float gpa;
};

void nhapThongTinSV(SinhVien &a){
	getline(cin, a.ht);
	cin >> a.lop;
	cin >> a.ns;
	cin >> a.gpa;
	if(a.ns[1] == '/'){
		a.ns = '0' + a.ns; 
	}
	if(a.ns[4] == '/'){
		a.ns = a.ns.insert(3, "0");
	} 
}

void inThongTinSV(SinhVien a){
	cout << a.msv << " " << a.ht << " " << a.lop << " " << a.ns << " ";
	cout << fixed << setprecision(2) << a.gpa;
}

int main(){
    struct SinhVien a;
    nhapThongTinSV(a);
    inThongTinSV(a);
    return 0;
}
