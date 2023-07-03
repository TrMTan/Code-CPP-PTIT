#include<bits/stdc++.h>

using namespace std;

struct MatHang{
	int ma;
	string ten, loai;
	float mua, ban, lai; 
	
	void nhap(){
		scanf("\n");
		getline(cin, ten);
		getline(cin, loai);
		cin >> mua;
		cin >> ban;
		lai = ban - mua;
	}
	
	void in(){
		cout << ma << " " << ten << " " << loai << " " ;
		cout << fixed << setprecision(2) << lai << endl; 
	}
};

bool cmp(MatHang a, MatHang b){
	return a.lai > b.lai;
}

int main(){
	int n;
	cin >> n;
	MatHang a[n];
	for(int i = 0; i < n; i++){
		a[i].ma = i + 1;
		a[i].nhap();
	}
	sort(a, a + n, cmp);
	for(int i = 0; i < n; i++){
		a[i].in();
	}
}
