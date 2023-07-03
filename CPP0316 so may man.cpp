#include<bits/stdc++.h>

using namespace std;

int tongchuso(string s){
	int tong = 0;
	int l = s.length();
	for(int i = 0; i < l; i++){
		tong += s[i] -'0';
	}
	if(tong < 10){
		return tong;
	}
	return tongchuso(to_string(tong));
}

void check(){
	string s;
	cin >> s;
	if(tongchuso(s) == 9){
		cout << "1";
	}else{
		cout << "0";
	}
	cout << endl;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		check();
	}
}
