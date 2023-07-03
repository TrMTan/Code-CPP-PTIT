#include<bits/stdc++.h>

using namespace std;

bool chia2(string s){
	for(auto x : s){
		if((x - '0') % 2 == 1){
			return 0;
		}
	}
	return 1;
}

void check(){
	string s;
	cin >> s;
	string x = s;
	reverse(s.begin(), s.end());
	if(x == s && chia2(s)){
		cout << "YES" << endl;
	}else{
		cout << "NO " << endl;
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		check();
	}
}
