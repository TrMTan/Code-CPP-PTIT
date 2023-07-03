#include<bits/stdc++.h>

using namespace std;

struct SinhVien{
	string msv, ht, lop;
	double d1, d2, d3;
};

bool cmp(SinhVien a, SinhVien b){
	return a.msv < b.msv;
}

void nhap(SinhVien &a){
	cin.ignore();
	getline(cin, a.msv);
	getline(cin, a.ht);
	getline(cin, a.lop);
	cin >> a.d1;
	cin >> a.d2;
	cin >> a.d3;
}

void sap_xep(SinhVien a[], int n){
	sort(a, a + n, cmp);
}

void in_ds(SinhVien a[], int n){
	for(int i = 0; i < n; i++){
		cout << i + 1 << " ";
		cout << a[i].msv << " " << a[i].ht << " " << a[i].lop << " ";
		cout << fixed << setprecision(1) << a[i].d1 << " " << a[i].d2 << " " << a[i].d3 << endl; 
	}
}

int main(){
    int n;
    cin >> n;
    struct SinhVien *ds = new SinhVien[n];
    for(int i = 0; i < n; i++) {
    	nhap(ds[i]);
	}
	sap_xep(ds, n);
    in_ds(ds,n);
    return 0;
}
