#include<bits/stdc++.h>

using namespace std;

struct SinhVien{
	string ht, lop, ns, masv;
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

bool cmp(SinhVien a, SinhVien b){
	return a.gpa > b.gpa;
}

void nhap(SinhVien a[], int n){
	for(int i = 0; i < n; i++){
		scanf("\n");
		getline(cin, a[i].ht);
		chuanhoa(a[i].ht);
		getline(cin, a[i].lop);
		cin >> a[i].ns;
		cin >> a[i].gpa;
		if(a[i].ns[1] == '/'){
			a[i].ns = '0' + a[i].ns;
		}
		if(a[i].ns[4] == '/'){
			a[i].ns = a[i].ns.insert(3, "0");
		}
		if(i < 9) a[i].masv = "B20DCCN00";
		else a[i].masv =  "B20DCCN0";
		a[i].masv = a[i].masv + to_string(i + 1);
	}
}

void sapxep(SinhVien a[], int n){
	sort(a, a + n, cmp);
}

void in(SinhVien a[], int n){
	for(int i = 0; i < n; i++){
		cout << a[i].masv << " " << a[i].ht << " " << a[i].lop << " " << a[i].ns << " ";
		cout << fixed << setprecision(2) << a[i].gpa << endl; 
	}
}

int main(){
    struct SinhVien ds[50];
    int N;
    cin >> N;
    nhap(ds, N);
    sapxep(ds,N);
    in(ds, N);
    return 0;
}
