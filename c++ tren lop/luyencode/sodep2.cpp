#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int sodx(int n){
	int so = 0;
	while(n > 0){
		so = so * 10 + n % 10;
		n /= 10;
	}
	return so;
}

int tongso(int n){
	int tong = 0;
	while(n > 0){
		tong += n % 10;
		n /= 10;
	}
	return tong;
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int l, r;
	while(cin >> l >> r){
		int dem = 0;
		for(int i = l; i <= r; i++){
			if(sodx(i) == i && tongso(i) % 10 == 0){
				dem++;
			}
		}
		cout << dem << endl;
	}
}
