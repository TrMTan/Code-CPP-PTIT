#include<bits/stdc++.h>

using namespace std;

bool check(string s){
	int chan = 0, le = 0;
	for(int i = 0; i < s.length(); i++){
		if(i % 2 == 0){
			chan += (s[i] - '0');
		}else{
			le += (s[i] - '0');
		}
	}
	int kq = chan - le;
	if(kq % 11 == 0){
		return true;
	}else{
		return false;
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		if(check(s)){
			cout << "1" << endl;
		}else{
			cout << "0" << endl;
		}
	}
}
