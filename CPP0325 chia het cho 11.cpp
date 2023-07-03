#include<bits/stdc++.h>

using namespace std;

bool check(string s){
	int l = s.length();
	int chan = 0, le = 0;
	for(int i = 0; i < l; i++){
		if(i % 2 == 0){
			chan += (s[i] - '0');
		}else{
			le += (s[i] - '0');
		}
	}
	int hieu = chan - le;
	if(hieu % 11 == 0){
		return true;
	}else{
		return false;
	}
}

int main(){
	int t;
	cin >> t;
	cin.ignore();
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
