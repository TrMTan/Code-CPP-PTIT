#include<iostream>
#include<bits/stdc++.h>
#include<math.h>
#include<iomanip>
using namespace std;

void canbang(string &a, string &b){
	while(a.size() < b.size()){
		a = '0' + a; 
	}
	while(a.size() > b.size()){
		b = '0' + b;
	}
}
string tong(string a, string b){
	canbang(a, b);
	int nho = 0;
	string tong;
	for(int i = a.size() - 1; i >= 0; i--){
		int d = (a[i] - '0') + (b[i] - '0') + nho;
		nho = d / 10;
		tong = (char)(d % 10 + '0') + tong;
	}
	if(nho){
		tong = '1' + tong;
	}
	return tong;
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	string a;
	getline(cin, a);
	string b;
	getline(cin, b);
	cout << tong(a, b);
}

