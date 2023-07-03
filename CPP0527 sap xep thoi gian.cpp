#include<bits/stdc++.h>

using namespace std;

struct ThoiGian{
	int gio, phut, giay;
};

bool cmp(ThoiGian a, ThoiGian b){
	if(a.gio == b.gio){
		if(a.phut == b.phut){
			return a.giay < b.giay;
		}
		return a.phut < b.phut;
	}
	return a.gio < b.gio;
}

void sapxep(ThoiGian a[], int n){
	sort(a, a + n, cmp);
}

int main(){
	int n;
	cin >> n;
	struct ThoiGian a[n];
	for(int i = 0; i < n; i++){
		cin >> a[i].gio >> a[i].phut >> a[i].giay;
	}
	sapxep(a, n);
	for(int i = 0; i < n; i++){
		cout << a[i].gio << " " << a[i].phut << " " << a[i].giay << endl;
	}
}
