#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int a0, a1, a2, b0, b1, b2, hd = 0, hp = 0;
	cin >> a0 >> a1 >> a2 >> b0 >> b1 >> b2;
	if(a0 > b0){
		hd += 1;
	}else if(a0 < b0){
		hp += 1;
	}
	if(a1 > b1){
		hd += 1;
	}else if(a1 < b1){
		hp += 1;
	}
	if(a2 > b2){
		hd += 1;
	}else if(a2 < b2){
		hp += 1;
	}
	cout << hd << " " << hp;
}
