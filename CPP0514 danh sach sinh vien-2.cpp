#include<bits/stdc++.h>

using namespace std;

struct SinhVien{
	string ht, lop, ns;
	float gpa;
};

void chuanhoa(string &str){
	string s, res = " ";
	stringstream ss(str);
	while(ss >> s){
		transform(s.begin(), s.end(), s.begin(), ::tolower);
		s[0] = toupper(s[0]);
		res += s + ' ';
	}
	res.pop_back();
	str = res;
}

void nhap(SinhVien a[], int n){
	for(int i = 0; i < n; i++){
		cin.ignore();
		getline(cin, a[i].ht);
		chuanhoa(a[i].ht);
		cin >> a[i].lop;
		cin >> a[i].ns;
		cin >> a[i].gpa;
	}
}

void in(SinhVien a[], int n){
	for(int i = 0; i < n; i++){
		if(a[i].ns[1] == '/'){
			a[i].ns = '0' + a[i].ns;
		}
		if(a[i].ns[4] == '/'){
			a[i].ns = a[i].ns.insert(3, "0");
		}
		if(i < 9) cout << "B20DCCN00";
		else cout <<"B20DCCN0";
		cout << i + 1 << " " << a[i].ht << " " << a[i].lop << " " << a[i].ns << " ";
		cout <<fixed << setprecision(2) << a[i].gpa << endl;
	}
}

int main(){
    struct SinhVien ds[50];
    int N;
    cin >> N;
    nhap(ds, N);
    in(ds, N);
    return 0;
}
