#include<bits/stdc++.h>

using namespace std;

bool check(string s){
	int tchan = 0, tle = 0;
	for(int i = 0; i < s.length(); i++){
		if(i % 2 == 0){
			tchan += (s[i] - '0');
		}else{
			tle += (s[i] - '0');
		}
	}
	int hieu = tchan - tle;
	if(hieu % 11 == 0){
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
			cout << "1";
		}else{
			cout << "0";
		}
		cout << endl;
	}
}
