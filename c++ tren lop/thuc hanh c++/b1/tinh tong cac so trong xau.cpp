#include<bits/stdc++.h>

using namespace std;

void check(){
	string s;
	cin >> s;
	int tong = 0, kq = 0;
	for(int i = 0; i < s.length(); i++){
		if(s[i] >= '0' && s[i] <= '9'){
			tong = tong * 10 + (s[i] - '0');
		}else{
			kq += tong;
			tong = 0;
		}
	}
	kq += tong;
	cout << kq << endl;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		check();
	}
}
