#include<bits/stdc++.h>

using namespace std;

void check(){
	string s;
	cin >> s;
	int check = 1;
	for(auto x : s){
		if(x != '0' && x != '6' && x != '8'){
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
	return 0;
}
