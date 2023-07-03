#include<bits/stdc++.h>

using namespace std;

bool kt(string s){
	if(s[0] == '-'){
		s.erase(0, 1);
	}
	for(int i = 0; i < s.length(); i++){
		if(i % 2 == 0 && (s[i] - '0') % 2 == 0){
			return true;
		}
		if(i % 2 != 0 && (s[i] - '0') % 2 != 0){
			return true;
		}
	}
	return false;
}

void check(){
	string s;
	cin >> s;
	if(kt(s)){
		cout << "NO";
	}else{
		cout << "YES";
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
