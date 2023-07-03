#include<bits/stdc++.h>

using namespace std;

int ktchu(string s){
	if(s[0] == '0') return -1;
	int b[10] = {0};
	for(int i = 0; i < s.size(); i++){
		if(s[i] < '0' || s[i] > '9'){
			return -1;
		}else{
			b[s[i] - '0']++;
		}
	}
	for(int i = 0; i < 10; i++){
		if(b[i] == 0){
			return 0;
		}
	}
	return 1;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
	cin >> s;
	if(ktchu(s) == -1){
		cout << "INVALID" << endl;
	}else if(ktchu(s) == 0){
		cout << "NO" << endl;
	}else{
		cout << "YES" << endl;
	}
	}
}
