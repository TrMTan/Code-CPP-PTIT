#include<bits/stdc++.h>

using namespace std;

void check(){
	string s;
	cin >> s;
	int check = 1;
	for(int i = 0; i < s.length(); i++){
		if(s[i] != '0' && s[i] != '6' && s[i] != '8'){
			check = 0;
			break;			
		}else{
			check = 1;
		}
	}
	if(check == 1){
		cout << "YES" << endl;
	}else{
		cout << "NO" << endl;
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		check();
	}
}
